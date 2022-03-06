#include "RCC.h"
#include "GPTIM.h"

void TIM_EnableClock(unsigned char Id){
	RCC_APB1ENR |= (1 << (Id - 2));
}

void TIM_Init(unsigned char Id, unsigned char CounterMode, unsigned int CounterValue, unsigned short Prescaler){
	TIMx_CR1(Id) |= (1 << 7);
	TIMx_CR1(Id) |= (CounterMode << 4);
	TIMx_PSC(Id) = Prescaler;
	TIMx_ARR(Id) = CounterValue;
}

void TIM_Start(unsigned char Id){
	TIMx_DIER(Id) |= (1 << 0);
	TIMx_CR1(Id) |= (1 << 0);
}

void TIM_Stop(unsigned char Id){
	TIMx_DIER(Id) &= ~(1 << 0);
}

unsigned char TIM_CheckFlag(unsigned Id, unsigned char Flag){
	return (TIMx_SR(Id) & (1 << Flag));
}

void TIM2_IRQHandler(void){
	// TIM2_Callout();
	TIMx_SR(2) = 0x0000;
}
