/**
**Author: Aeroman
**Date:		2018-9-30
**Description: USART2 Configuration 
*/

#ifndef _USART2_H_
#define _USART2_H_

#include "stm32f4xx.h"
#include "stm32f4xx_conf.h"


/**
**RCC settings
*/
#define USART2_RCC_AHB			RCC_AHB1Periph_GPIOA
#define USART2_RCC_APB			RCC_APB1Periph_USART2

/**
**GPIO settings
*/
#define USART2_GPIO_PORT		GPIOA
#define USART2_GPIO_PIN			GPIO_Pin_2 | GPIO_Pin_3
#define USART2_GPIO_TXSRC		GPIO_PinSource2
#define USART2_GPIO_RXSRC		GPIO_PinSource3

/**
**USART settings
*/
#define USART2_MODE				USART_Mode_Rx|USART_Mode_Tx
#define USART2_BAUDRATE			115200
#define USART2_WORDLEN			USART_WordLength_8b
#define USART2_STOPBIT			USART_StopBits_1
#define USART2_PARITY			USART_Parity_No
#define USART2_HWFLOWCTRL		USART_HardwareFlowControl_None


extern u8 USART_RX_TEST;

void USART2_Config(void);
void USART2_IRQHandler(void);
//void USART3_IRQHandler(void);  
#endif /*_Dbus_H*/
