#ifndef SCCHARTSH
#define SCCHARTSH

// Function for SCCharts
void reset();
void tick();

// Atrial and Ventrical sensing
extern char ASense;
extern char VSense;

// Start timers for SCCharts
extern char AVI_start;
extern char PVARP_start;
extern char VRP_start;
extern char AEI_start;
extern char LRI_start;
extern char URI_start;

// Stop timers for SCCharts
extern char AVI_stop;
extern char AEI_stop;
extern char LRI_stop;
extern char URI_stop;

// Timer timeouts
extern char AVI_TO;
extern char PVARP_TO;
extern char VRP_TO;
extern char AEI_TO;
extern char LRI_TO;
extern char URI_TO;
extern char VPace;
extern char APace;

#endif /* SCCHARTSH */
