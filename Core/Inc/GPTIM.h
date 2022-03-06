#ifndef INC_GPTIM_H_
#define INC_GPTIM_H_

#include "main.h"

#define UPCOUNTER 0x00
#define DOWNCOUNTER 0x01

#define UIF 0x00
#define TIF 0x06

#define TIMx_CR1(x) DEFINE_REG(0x40000000 + 0x400 * (x - 2), 0x00)
#define TIMx_DIER(x) DEFINE_REG(0x40000000 + 0x400 * (x - 2), 0x0C)
#define TIMx_SR(x) DEFINE_REG(0x40000000 + 0x400 * (x - 2), 0x10)
#define TIMx_EGR(x) DEFINE_REG(0x40000000 + 0x400 * (x - 2), 0x14)
#define TIMx_CNT(x) DEFINE_REG(0x40000000 + 0x400 * (x - 2), 0x24)
#define TIMx_PSC(x) DEFINE_REG(0x40000000 + 0x400 * (x - 2), 0x28)
#define TIMx_ARR(x) DEFINE_REG(0x40000000 + 0x400 * (x - 2), 0x2C)

void TIM_EnableClock(unsigned char Id);
void TIM_Init(unsigned char Id, unsigned char CounterMode, unsigned int CounterValue, unsigned short Prescaler);
void TIM_Start(unsigned char Id);
void TIM_Stop(unsigned char Id);
unsigned char TIM_CheckFlag(unsigned Id, unsigned char Flag);

#endif /* INC_GPTIM_H_ */
