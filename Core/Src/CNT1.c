/*
 * CNT1.c
 *
 *  Created on: Oct 23, 2021
 *      Author: leewo
 */

#include "CNT1.h"
#include "main.h"

void lightOnGreen() {
	GPIOE->ODR |= (1 << 9);
	GPIOE->ODR &= ~(1 << 11);
}

void lightOnRed() {
	GPIOE->ODR &= ~(1 << 9);
	GPIOE->ODR |= (1 << 11);
}

