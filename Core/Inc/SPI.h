#ifndef INC_SPI_H_
#define INC_SPI_H_

#include "main.h"

#define SLAVE 0x00
#define MASTER 0x01

#define SPI1_CR1 DEFINE_REG(0x40013000, 0x00)
#define SPI1_SR DEFINE_REG(0x40013000, 0x08)
#define SPI1_DR DEFINE_REG(0x40013000, 0x0C)

#endif /* INC_SPI_H_ */
