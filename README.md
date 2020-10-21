SetUp:
Connect Altera DE2-115 to the computer
Open Quartus II 18.1
Open the Programmer window and click on 'Add File' and select 'cs303.sof' 
Make sure 'Program/Configure' is ticked and press start.
Open Nios II and add these two folders to this workspace: 'PaceMaker_303' and 'PaceMaker_303_bsp'
Build both folders.
After successfully building right click 'PaceMaker_303'and run as 'Nios II Hardware'

Buttons / LEDs:
The Buttons on the DE2-115 can be used to simulate the inputs VSense and ASense
Key 0 is VSense, Key 1 is ASense
The LEDs on the DE2-115 are used to show the outputs VPace and APace
LEDG0 is VPace, LEDG1 is APace

UART configuration:
Run CS303-Heart.exe and select 'Session'
Select the appropriate port in the 'COM Port' setting and set the Baud Rate to 115200
Click 'Update' to establish connection between the pacemaker and virtual heart.


Make sure there are no space characters for all files used. Issues may arise in NIOS II otherwise.
