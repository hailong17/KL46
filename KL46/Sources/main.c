#include "derivative.h" /* include peripheral declarations */

#define LED_PORT FPTD_BASE_PTR
#define LED_PIN_0 0x01  
#define LED_PIN_1 0x02 
#define LED_PIN_2 0x04 
#define LED_PIN_3 0x08 
#define LED_PIN_4 0x10 
#define LED_PIN_5 0x20 
/*#define LED_PIN_1 32*/


/* base: dia chi bat dau(GPIO) */
/* offset: dia chi tuong ung */

#define PTA PORTA_BASE_PTR 
#define PTE PORTE_BASE_PTR
#define FPTD FPTD_BASE_PTR
#define FPTE FPTE_BASE_PTR

void systemClockInit(void)
{
	OSC0_BASE_PTR->CR = 0xFF; //enable external clock and capactor
	MCG_BASE_PTR->C1 |= (2<<6) | (1<<1); // select external clock
	SIM_BASE_PTR->CLKDIV1 |= 1<<28;
}

void GPIO_Init(void)
{
	/* Init port module */
	//PTA->PCR[5] |= 1<<8;/* config MUX */
	//PTA->PCR[5] |= 1<<1;/* config PE */
	//PTA->PCR[5] |= 1<<0;/* config PS */
	
	/* Init pin PTD5 - PTE29module */
	PTE->PCR[2] |= 1<<8;/* config MUX */
	PTE->PCR[2] |= 1<<1;/* config PE */
	PTE->PCR[2] |= 1<<0;/* config PS */
	
	
}

void delay(uint32_t count)
{
	while(count--);
}

int main(void)
{
	systemClockInit();
	GPIO_Init();
	while(1)
	{
		//FPTD->PTOR |= 1<<5;/* ghi 1 vao dao trang thai */
		//FPTE->PTOR |= 1<<29;
		
	}
	//LED_PORT->PDOR = 0b00000000000000000000000000100000& 0b00000000000000000000000000000000;
	LED_PORT->PDOR = LED_PIN_5; 
	/*LED_PORT->PDOR = 0<<5UL; *//*PDDR5*/
	
	LED_PORT->PDOR = (LED_PIN_5|LED_PIN_1);/* 0x21u--LED ON PT5, PT0 */
	
	LED_PORT->PDOR &= ~LED_PIN_5;/* LED 5 OFF */
	//LED_PORT->PDOR &= 0x00000021&  ~LED_PIN_5;
	//LED_PORT->PDOR &= 0x00000021& 0xFFFFFFDF; //=0x00000001
	
	
	
	
	return 0;
}
