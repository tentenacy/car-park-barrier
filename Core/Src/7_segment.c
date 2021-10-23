/*
 * 7_segment.c
 *
 *  Created on: Oct 22, 2021
 *      Author: leewo
 */

#include "main.h"

void light7On_10(int num) {
	switch(num) {
	case 0:
		GPIOE->ODR &= ~(1 << 7); //A
		GPIOE->ODR &= ~(1 << 10); //B
		GPIOE->ODR &= ~(1 << 3); //C
		GPIOF->ODR &= ~(1 << 8); //D
		GPIOF->ODR &= ~(1 << 7); //E
		GPIOE->ODR &= ~(1 << 8); //F
		GPIOE->ODR |= (1 << 13); //G
		GPIOE->ODR |= (1 << 6); //DP
		break;
	case 1:
		GPIOE->ODR |= (1 << 7); //A
		GPIOE->ODR &= ~(1 << 10); //B
		GPIOE->ODR &= ~(1 << 3); //C
		GPIOF->ODR |= (1 << 8); //D
		GPIOF->ODR |= (1 << 7); //E
		GPIOE->ODR |= (1 << 8); //F
		GPIOE->ODR |= (1 << 13); //G
		GPIOE->ODR |= (1 << 6); //DP
		break;
	case 2:
		GPIOE->ODR &= ~(1 << 7); //A
		GPIOE->ODR &= ~(1 << 10); //B
		GPIOE->ODR |= (1 << 3); //C
		GPIOF->ODR &= ~(1 << 8); //D
		GPIOF->ODR &= ~(1 << 7); //E
		GPIOE->ODR |= (1 << 8); //F
		GPIOE->ODR &= ~(1 << 13); //G
		GPIOE->ODR |= (1 << 6); //DP
		break;
	case 3:
		GPIOE->ODR &= ~(1 << 7); //A
		GPIOE->ODR &= ~(1 << 10); //B
		GPIOE->ODR &= ~(1 << 3); //C
		GPIOF->ODR &= ~(1 << 8); //D
		GPIOF->ODR |= (1 << 7); //E
		GPIOE->ODR |= (1 << 8); //F
		GPIOE->ODR &= ~(1 << 13); //G
		GPIOE->ODR |= (1 << 6); //DP
		break;
	case 4:
		GPIOE->ODR |= (1 << 7); //A
		GPIOE->ODR &= ~(1 << 10); //B
		GPIOE->ODR &= ~(1 << 3); //C
		GPIOF->ODR |= (1 << 8); //D
		GPIOF->ODR |= (1 << 7); //E
		GPIOE->ODR &= ~(1 << 8); //F
		GPIOE->ODR &= ~(1 << 13); //G
		GPIOE->ODR |= (1 << 6); //DP
		break;
	case 5:
		GPIOE->ODR &= ~(1 << 7); //A
		GPIOE->ODR |= (1 << 10); //B
		GPIOE->ODR &= ~(1 << 3); //C
		GPIOF->ODR &= ~(1 << 8); //D
		GPIOF->ODR |= (1 << 7); //E
		GPIOE->ODR &= ~(1 << 8); //F
		GPIOE->ODR &= ~(1 << 13); //G
		GPIOE->ODR |= (1 << 6); //DP
		break;
	case 6:
		GPIOE->ODR &= ~(1 << 7); //A
		GPIOE->ODR |= (1 << 10); //B
		GPIOE->ODR &= ~(1 << 3); //C
		GPIOF->ODR &= ~(1 << 8); //D
		GPIOF->ODR &= ~(1 << 7); //E
		GPIOE->ODR &= ~(1 << 8); //F
		GPIOE->ODR &= ~(1 << 13); //G
		GPIOE->ODR |= (1 << 6); //DP
		break;
	case 7:
		GPIOE->ODR &= ~(1 << 7); //A
		GPIOE->ODR &= ~(1 << 10); //B
		GPIOE->ODR &= ~(1 << 3); //C
		GPIOF->ODR |= (1 << 8); //D
		GPIOF->ODR |= (1 << 7); //E
		GPIOE->ODR &= ~(1 << 8); //F
		GPIOE->ODR |= (1 << 13); //G
		GPIOE->ODR |= (1 << 6); //DP
		break;
	case 8:
		GPIOE->ODR &= ~(1 << 7); //A
		GPIOE->ODR &= ~(1 << 10); //B
		GPIOE->ODR &= ~(1 << 3); //C
		GPIOF->ODR &= ~(1 << 8); //D
		GPIOF->ODR &= ~(1 << 7); //E
		GPIOE->ODR &= ~(1 << 8); //F
		GPIOE->ODR &= ~(1 << 13); //G
		GPIOE->ODR |= (1 << 6); //DP
		break;
	case 9:
		GPIOE->ODR &= ~(1 << 7); //A
		GPIOE->ODR &= ~(1 << 10); //B
		GPIOE->ODR &= ~(1 << 3); //C
		GPIOF->ODR &= ~(1 << 8); //D
		GPIOF->ODR |= (1 << 7); //E
		GPIOE->ODR &= ~(1 << 8); //F
		GPIOE->ODR &= ~(1 << 13); //G
		GPIOE->ODR |= (1 << 6); //DP
		break;
	}
}

void light7On_1(int num) {
	switch(num) {
	case 0:
		GPIOE->ODR &= ~(1 << 15); //A
		GPIOE->ODR &= ~(1 << 0); //B
		GPIOF->ODR &= ~(1 << 0); //C
		GPIOE->ODR &= ~(1 << 4); //D
		GPIOE->ODR &= ~(1 << 5); //E
		GPIOE->ODR &= ~(1 << 14); //F
		GPIOE->ODR |= (1 << 12); //G
		GPIOF->ODR |= (1 << 9); //DP
		break;
	case 1:
		GPIOE->ODR |= (1 << 15); //A
		GPIOE->ODR &= ~(1 << 0); //B
		GPIOF->ODR &= ~(1 << 0); //C
		GPIOE->ODR |= (1 << 4); //D
		GPIOE->ODR |= (1 << 5); //E
		GPIOE->ODR |= (1 << 14); //F
		GPIOE->ODR |= (1 << 12); //G
		GPIOF->ODR |= (1 << 9); //DP
		break;
	case 2:
		GPIOE->ODR &= ~(1 << 15); //A
		GPIOE->ODR &= ~(1 << 0); //B
		GPIOF->ODR |= (1 << 0); //C
		GPIOE->ODR &= ~(1 << 4); //D
		GPIOE->ODR &= ~(1 << 5); //E
		GPIOE->ODR |= (1 << 14); //F
		GPIOE->ODR &= ~(1 << 12); //G
		GPIOF->ODR |= (1 << 9); //DP
		break;
	case 3:
		GPIOE->ODR &= ~(1 << 15); //A
		GPIOE->ODR &= ~(1 << 0); //B
		GPIOF->ODR &= ~(1 << 0); //C
		GPIOE->ODR &= ~(1 << 4); //D
		GPIOE->ODR |= (1 << 5); //E
		GPIOE->ODR |= (1 << 14); //F
		GPIOE->ODR &= ~(1 << 12); //G
		GPIOF->ODR |= (1 << 9); //DP
		break;
	case 4:
		GPIOE->ODR |= (1 << 15); //A
		GPIOE->ODR &= ~(1 << 0); //B
		GPIOF->ODR &= ~(1 << 0); //C
		GPIOE->ODR |= (1 << 4); //D
		GPIOE->ODR |= (1 << 5); //E
		GPIOE->ODR &= ~(1 << 14); //F
		GPIOE->ODR &= ~(1 << 12); //G
		GPIOF->ODR |= (1 << 9); //DP
		break;
	case 5:
		GPIOE->ODR &= ~(1 << 15); //A
		GPIOE->ODR |= (1 << 0); //B
		GPIOF->ODR &= ~(1 << 0); //C
		GPIOE->ODR &= ~(1 << 4); //D
		GPIOE->ODR |= (1 << 5); //E
		GPIOE->ODR &= ~(1 << 14); //F
		GPIOE->ODR &= ~(1 << 12); //G
		GPIOF->ODR |= (1 << 9); //DP
		break;
	case 6:
		GPIOE->ODR &= ~(1 << 15); //A
		GPIOE->ODR |= (1 << 0); //B
		GPIOF->ODR &= ~(1 << 0); //C
		GPIOE->ODR &= ~(1 << 4); //D
		GPIOE->ODR &= ~(1 << 5); //E
		GPIOE->ODR &= ~(1 << 14); //F
		GPIOE->ODR &= ~(1 << 12); //G
		GPIOF->ODR |= (1 << 9); //DP
		break;
	case 7:
		GPIOE->ODR &= ~(1 << 15); //A
		GPIOE->ODR &= ~(1 << 0); //B
		GPIOE->ODR &= ~(1 << 2); //C
		GPIOE->ODR |= (1 << 4); //D
		GPIOE->ODR |= (1 << 5); //E
		GPIOE->ODR &= ~(1 << 14); //F
		GPIOE->ODR |= (1 << 12); //G
		GPIOF->ODR |= (1 << 9); //DP
		break;
	case 8:
		GPIOE->ODR &= ~(1 << 15); //A
		GPIOE->ODR &= ~(1 << 0); //B
		GPIOF->ODR &= ~(1 << 0); //C
		GPIOE->ODR &= ~(1 << 4); //D
		GPIOE->ODR &= ~(1 << 5); //E
		GPIOE->ODR &= ~(1 << 14); //F
		GPIOE->ODR &= ~(1 << 12); //G
		GPIOF->ODR |= (1 << 9); //DP
		break;
	case 9:
		GPIOE->ODR &= ~(1 << 15); //A
		GPIOE->ODR &= ~(1 << 0); //B
		GPIOF->ODR &= ~(1 << 0); //C
		GPIOE->ODR &= ~(1 << 4); //D
		GPIOE->ODR |= (1 << 5); //E
		GPIOE->ODR &= ~(1 << 14); //F
		GPIOE->ODR &= ~(1 << 12); //G
		GPIOF->ODR |= (1 << 9); //DP
		break;
	}
}
