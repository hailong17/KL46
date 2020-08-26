#include "derivative.h" /* include peripheral declarations */

void SystemClockInit(void)

{

SIM_BASE_PTR->SCGC5 |= 1<<13; /* PORTE clock enable */

SIM_BASE_PTR->SCGC5 |= 1<<12; /* PORTD clock enable */

}

void GPIO_Init(void)

{

PORTE_BASE_PTR->PCR[2] |= 1<<8;

FPTE_BASE_PTR->PDDR |= 1<<2;

}

void delay(uint32_t time)

{

while(time--);

}

int main(void)

{

SystemClockInit();

GPIO_Init();

for(;;) {

FPTE_BASE_PTR->PDOR |= 1<<2;

delay(200);

FPTE_BASE_PTR->PDOR &= ~(1<<2);

delay(200);

}

return 0;

}
