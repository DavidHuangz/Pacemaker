#include "main.h"

// Timer interrupts that timeout on pre-defined values for each signal
alt_u32 AVI_ISR(void* context) {
	AVI_TO = 1;
	alt_alarm_start(&AVI_Buffer_Timer, SIGNAL_BUFFER, AVI_Buffer_ISR, NULL);
	return 0;
}

alt_u32 AEI_ISR(void* context) {
	AEI_TO = 1;
	alt_alarm_start(&AEI_Buffer_Timer, SIGNAL_BUFFER, AEI_Buffer_ISR, NULL);
	return 0;
}

alt_u32 PVARP_ISR(void* context) {
	PVARP_TO = 1;
	alt_alarm_start(&PVARP_Buffer_Timer, SIGNAL_BUFFER, PVARP_Buffer_ISR, NULL);
	return 0;
}

alt_u32 VRP_ISR(void* context) {
	VRP_TO = 1;
	alt_alarm_start(&VRP_Buffer_Timer, SIGNAL_BUFFER, VRP_Buffer_ISR, NULL);
	return 0;
}

alt_u32 LRI_ISR(void* context) {
	LRI_TO = 1;
	alt_alarm_start(&LRI_Buffer_Timer, SIGNAL_BUFFER, LRI_Buffer_ISR, NULL);
	return 0;
}

alt_u32 URI_ISR(void* context) {
	URI_TO = 1;
	alt_alarm_start(&URI_Buffer_Timer, SIGNAL_BUFFER, URI_Buffer_ISR, NULL);
	return 0;
}

// LED timers to make LEDs stay on for a length of time
alt_u32 LED_Atrial_ISR(void* context) {
	printf("%d", mode);
	printf("LED0\n");
	LEDAPace = 0;
	return 0;
}

alt_u32 LED_Ventricular_ISR(void* context) {
	printf("%d", mode);
	printf("LED1\n");
	LEDVPace = 0;
	return 0;
}

// Timers that set the signal back to zero to prevent signal propagation through ticks in SCCharts.
alt_u32 A_Sense_ISR(void* context) {
	printf("A_Sense_Timer\n");
	ASense = 0;
	Flag = 0;
	return 0;
}

alt_u32 V_Sense_ISR(void* context) {
	printf("V_Sense_Timer\n");
	VSense = 0;
	Flag = 0;
	return 0;
}

alt_u32 AVI_Buffer_ISR(void* context) {
	printf("AVI_Buffer_ISR\n");
	AVI_TO = 0;
	return 0;
}

alt_u32 AEI_Buffer_ISR(void* context) {
	printf("AEI_Buffer_ISR\n");
	AEI_TO = 0;
	return 0;
}

alt_u32 PVARP_Buffer_ISR(void* context) {
	printf("PVARP_Buffer_ISR\n");
	PVARP_TO = 0;
	return 0;
}

alt_u32 VRP_Buffer_ISR(void* context) {
	printf("VRP_Buffer_ISR\n");
	VRP_TO = 0;
	return 0;
}

alt_u32 LRI_Buffer_ISR(void* context) {
	printf("LRI_Buffer_ISR\n");
	LRI_TO = 0;
	return 0;
}

alt_u32 URI_Buffer_ISR(void* context) {
	printf("URI_Buffer_ISR\n");
	URI_TO = 0;
	return 0;
}

/*
 * Starts and stops timers based on inputs from the
 * SCCharts generated code.
 */
void TimerConfig() {
	// Stopping and starting the timers for the SCCharts
	if (AVI_start > 0) {
		AVI_TO = 0;
		alt_alarm_stop(&AVI_Timer);
		alt_alarm_start(&AVI_Timer, AVI_VALUE, AVI_ISR, NULL);
	}
	if (PVARP_start > 0) {
		PVARP_TO = 0;
		alt_alarm_stop(&PVARP_Timer);
		alt_alarm_start(&PVARP_Timer, PVARP_VALUE, PVARP_ISR, NULL);
	}
	if (VRP_start > 0) {
		VRP_TO = 0;
		alt_alarm_start(&VRP_Timer, VRP_VALUE, VRP_ISR, NULL);
	}
	if (AEI_start > 0) {
		AEI_TO = 0;
		alt_alarm_stop(&AEI_Timer);
		alt_alarm_start(&AEI_Timer, AEI_VALUE, AEI_ISR, NULL);
	}
	if (LRI_start > 0) {
		LRI_TO = 0;
		alt_alarm_start(&LRI_Timer, LRI_VALUE, LRI_ISR, NULL);
	}
	if (URI_start > 0) {
		URI_TO = 0;
		alt_alarm_stop(&URI_Timer);
		alt_alarm_start(&URI_Timer, URI_VALUE, URI_ISR, NULL);
	}

	// Stopping the timers for the SCCharts
	if (AVI_stop > 0) {
		alt_alarm_stop(&AVI_Timer);
		AVI_TO = 0;
	}
	if (AEI_stop > 0) {
		alt_alarm_stop(&AEI_Timer);
		AEI_TO = 0;
	}
	if (LRI_stop > 0) {
		alt_alarm_stop(&LRI_Timer);
		LRI_TO = 0;
	}
	if (URI_stop > 0) {
		alt_alarm_stop(&URI_Timer);
		URI_TO = 0;
	}
}

void ButtonPolling() {
	// Check if a button was pressed
	unsigned keyval = 0;
	keyval = IORD_ALTERA_AVALON_PIO_DATA(BUTTONS_BASE);
	int key0 = keyval & 0x01;
	int key1 = keyval & 0x02;

	// Key 0 simulates the Ventricular
	if (key0 == 0) {
		if (t_key2 == 0) {
			VSense = 1;
			alt_alarm_start(&V_Sense_Timer, SIGNAL_BUFFER, V_Sense_ISR,
			NULL);
			printf("Button0 ");
		}
		t_key2 = 1;
	} else {
		t_key2 = 0;
	}

	// Key 1 simulates the Atrial
	if (key1 == 0) {
		if (t_key1 == 0) {
			ASense = 1;
			alt_alarm_start(&A_Sense_Timer, SIGNAL_BUFFER, A_Sense_ISR,
			NULL);
			printf("Button1 ");
		}
		t_key1 = 1;
	} else {
		t_key1 = 0;
	}
}

void AVLEDS() {
	// Send pacing signals to UART
	if (APace > 0) {
		if (mode == 1) {
			fprintf(fp, "\nA");
			fflush(fp);
		}
		// Start LED timer for LED to stay on for a length of time
		LEDAPace = 1;
		alt_alarm_stop(&LED_Atrial_Timer);
		alt_alarm_start(&LED_Atrial_Timer, LED_BUFFER, LED_Atrial_ISR, NULL);
	}
	if (VPace > 0) {
		if (mode == 1) {
			fprintf(fp, "\nV");
			fflush(fp);
		}
		// Start LED timer for LED to stay on for a length of time
		LEDVPace = 1;
		alt_alarm_stop(&LED_Ventricular_Timer);
		alt_alarm_start(&LED_Ventricular_Timer, LED_BUFFER, LED_Ventricular_ISR,
		NULL);
	}
	// Change the state of the LED
	if (LEDVPace > 0) {
		if (LEDAPace > 0)
			IOWR_ALTERA_AVALON_PIO_DATA(LEDS_GREEN_BASE, LED[3]);
		else
			IOWR_ALTERA_AVALON_PIO_DATA(LEDS_GREEN_BASE, LED[1]);
	} else {
		if (LEDAPace > 0)
			IOWR_ALTERA_AVALON_PIO_DATA(LEDS_GREEN_BASE, LED[2]);
		else
			IOWR_ALTERA_AVALON_PIO_DATA(LEDS_GREEN_BASE, LED[0]);
	}
}

void handle_mode_switch() {
	// Check switch 0 only
	ModeChange = IORD_ALTERA_AVALON_PIO_DATA(SWITCHES_BASE) & 0x01;

	//Check for mode change
	if ((ModeChange != mode)) {
		mode = ModeChange;
		lcd_set_mode(mode);
	}
}

void uart() {
	//if a byte has been read
	if (read(up, byte, 1) > 0) {
		if (*byte == 'A') {
			if (Flag == 0) {
				ASense = 1; //set ASense high
				alt_alarm_start(&A_Sense_Timer, SIGNAL_BUFFER, A_Sense_ISR,
				NULL);
				Flag = 1;
				printf("ASense UART\n");
			}
		} else if (*byte == 'V') {
			if (Flag == 0) {
				VSense = 1; //set VSense high
				alt_alarm_start(&V_Sense_Timer, SIGNAL_BUFFER, V_Sense_ISR,
				NULL);
				Flag = 1;
				printf("VSense UART\n");
			}
		} else {
			//reset buffers if invalid data
			VSense = 0;
			ASense = 0;
		}
	} else {
		//reset buffers if nothing read
		VSense = 0;
		ASense = 0;
	}

}

void lcd_set_mode(unsigned int mode) {
	if (lcd != NULL) {
		fprintf(lcd, "%c%s", 27, "[2J");
		fprintf(lcd, "Mode: %d\n", mode + 1);
		if (mode == 0) {
			fprintf(lcd, "Buttons\n");
		} else {
			fprintf(lcd, "UART\n");
		}
	}
}

int main() {
	// LCD
	lcd = fopen(LCD_NAME, "w");
	lcd_set_mode(0);

	// Non-blocking Uart
	up = open(UART_NAME, O_RDWR | O_NONBLOCK);
	fp = fopen(UART_NAME, "w+");
	reset();

	while (1) {
		switch (mode) {
		// Mode 1
		case 0:
			ButtonPolling();
			break;
			// Mode 2
		case 1:
			uart();
			break;
		}

		tick();
		TimerConfig();
		AVLEDS();
		handle_mode_switch();
	}
	close(up);
	fclose(fp);
	fclose(lcd);
	return 0;
}
