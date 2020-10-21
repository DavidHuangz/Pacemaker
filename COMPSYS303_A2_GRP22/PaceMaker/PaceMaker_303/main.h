#ifndef MAIN_H_
#define MAIN_H_
#include <system.h>
#include <altera_avalon_pio_regs.h>
#include <alt_types.h>
#include "sys/alt_alarm.h"
#include "sccharts.h"
#include <stdio.h>
#include <fcntl.h>
#include <string.h>

// Timer ISRs
alt_u32 AVI_ISR(void* context);
alt_u32 AEI_ISR(void* context);
alt_u32 PVARP_ISR(void* context);
alt_u32 VRP_ISR(void* context);
alt_u32 LRI_ISR(void* context);
alt_u32 URI_ISR(void* context);
alt_u32 LED_Atrial_ISR(void* context);
alt_u32 LED_Ventricular_ISR(void* context);
alt_u32 A_Sense_ISR(void* context);
alt_u32 V_Sense_ISR(void* context);
alt_u32 AVI_Buffer_ISR(void* context);
alt_u32 AEI_Buffer_ISR(void* context);
alt_u32 PVARP_Buffer_ISR(void* context);
alt_u32 VRP_Buffer_ISR(void* context);
alt_u32 LRI_Buffer_ISR(void* context);
alt_u32 URI_Buffer_ISR(void* context);

// Timer Alarms
static alt_alarm AVI_Timer;
static alt_alarm AEI_Timer;
static alt_alarm PVARP_Timer;
static alt_alarm VRP_Timer;
static alt_alarm LRI_Timer;
static alt_alarm URI_Timer;
static alt_alarm LED_Atrial_Timer;
static alt_alarm LED_Ventricular_Timer;
static alt_alarm A_Sense_Timer;
static alt_alarm V_Sense_Timer;
static alt_alarm AVI_Buffer_Timer;
static alt_alarm AEI_Buffer_Timer;
static alt_alarm PVARP_Buffer_Timer;
static alt_alarm VRP_Buffer_Timer;
static alt_alarm LRI_Buffer_Timer;
static alt_alarm URI_Buffer_Timer;

// UART & LCD
static volatile unsigned int mode = 0;
static volatile unsigned int ModeChange = 0;
static volatile unsigned int Flag = 0;

// Timeouts (ms)
#define AVI_VALUE 300
#define AEI_VALUE 800
#define PVARP_VALUE 50
#define VRP_VALUE 150
#define LRI_VALUE 950
#define URI_VALUE 900
#define LED_BUFFER 200
#define SIGNAL_BUFFER 1

// Button debouncers
static volatile unsigned int t_key1 = 0;
static volatile unsigned int t_key2 = 0;

// LED for atrial and ventrical
static volatile unsigned int LEDVPace = 0;
static volatile unsigned int LEDAPace = 0;

// LED lights
static unsigned char LED[4] = { 0x00, 0x01, 0x02, 0x03 };

// Uart
static volatile int recv_char;
FILE* lcd;
FILE* up;
FILE* fp;
char* byte;

// Functions
int main();
void TimerConfig();
void AVLEDS();
void ButtonPolling();
void handle_mode_switch();
void lcd_set_mode();
void close();
void uart();

#endif /* MAIN_H_ */
