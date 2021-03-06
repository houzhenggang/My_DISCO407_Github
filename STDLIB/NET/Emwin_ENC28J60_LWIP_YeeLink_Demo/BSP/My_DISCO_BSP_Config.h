/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MY_DISCO_BSP_CONFIG_H__
#define __MY_DISCO_BSP_CONFIG_H__

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx.h"

/* */
#define Open_Debug
/* if you want debug with UART, open this MICRO */
#define DeBug_Mode_UART
/* if you want debug with LCD, open this MICRO */
#define DeBug_Mode_LCD
/* UART Configure Define */
#define UART1


/* Key Define*/
#define BSP_KEY1                           GPIO_Pin_0
#define BSP_KEY1_CLK_INIT                  RCC_APB1PeriphClockCmd
#define BSP_KEY1_GPIO_PORT                 GPIOA

/* SPI Define */
#define BSP_SPIx                           SPI2
#define BSP_SPIx_CLK                       RCC_APB1Periph_SPI2
#define BSP_SPIx_CLK_INIT                  RCC_APB1PeriphClockCmd
#define BSP_SPIx_IRQn                      SPI2_IRQn
#define BSP_SPIx_IRQHANDLER                SPI2_IRQHandler

#define BSP_SPIx_NSS_PIN                   GPIO_Pin_12
#define BSP_SPIx_NSS_GPIO_PORT             GPIOB
#define BSP_SPIx_NSS_GPIO_CLK              RCC_AHB1Periph_GPIOB
#define BSP_SPIx_NSS_SOURCE                GPIO_PinSource12
#define BSP_SPIx_NSS_AF                    GPIO_AF_SPI2

#define BSP_SPIx_SCK_PIN                   GPIO_Pin_13
#define BSP_SPIx_SCK_GPIO_PORT             GPIOB
#define BSP_SPIx_SCK_GPIO_CLK              RCC_AHB1Periph_GPIOB
#define BSP_SPIx_SCK_SOURCE                GPIO_PinSource13
#define BSP_SPIx_SCK_AF                    GPIO_AF_SPI2

#define BSP_SPIx_MISO_PIN                  GPIO_Pin_14
#define BSP_SPIx_MISO_GPIO_PORT            GPIOB
#define BSP_SPIx_MISO_GPIO_CLK             RCC_AHB1Periph_GPIOB
#define BSP_SPIx_MISO_SOURCE               GPIO_PinSource14
#define BSP_SPIx_MISO_AF                   GPIO_AF_SPI2

#define BSP_SPIx_MOSI_PIN                  GPIO_Pin_15
#define BSP_SPIx_MOSI_GPIO_PORT            GPIOB
#define BSP_SPIx_MOSI_GPIO_CLK             RCC_AHB1Periph_GPIOB
#define BSP_SPIx_MOSI_SOURCE               GPIO_PinSource15
#define BSP_SPIx_MOSI_AF                   GPIO_AF_SPI2

#define BUFFERSIZE                         100

/* UART1 Define */
#ifdef UART1
/* Development board PA9 and PA10 occupied, so use PB6 and PB7 */
#define BSP_USARTx                           USART1
#define BSP_USARTx_BASE                      USART1_BASE
#define BSP_USARTx_CLK                       RCC_APB2Periph_USART1
#define BSP_USARTx_CLK_INIT                  RCC_APB2PeriphClockCmd
#define BSP_USARTx_IRQn                      USART1_IRQn
#define BSP_USARTx_IRQHandler                USART1_IRQHandler

#define BSP_USARTx_TX_PIN                    GPIO_Pin_6                
#define BSP_USARTx_TX_GPIO_PORT              GPIOB                       
#define BSP_USARTx_TX_GPIO_CLK               RCC_AHB1Periph_GPIOB
#define BSP_USARTx_TX_SOURCE                 GPIO_PinSource6
#define BSP_USARTx_TX_AF                     GPIO_AF_USART1

#define BSP_USARTx_RX_PIN                    GPIO_Pin_7                
#define BSP_USARTx_RX_GPIO_PORT              GPIOB                    
#define BSP_USARTx_RX_GPIO_CLK               RCC_AHB1Periph_GPIOB
#define BSP_USARTx_RX_SOURCE                 GPIO_PinSource7
#define BSP_USARTx_RX_AF                     GPIO_AF_USART1
#endif

/* UART3 Define */
#ifdef UART3
#define BSP_USARTx                           USART3
#define BSP_USARTx_BASE                      USART3_BASE
#define BSP_USARTx_CLK                       RCC_APB1Periph_USART3
#define BSP_USARTx_CLK_INIT                  RCC_APB1PeriphClockCmd
#define BSP_USARTx_IRQn                      USART3_IRQn
#define BSP_USARTx_IRQHandler                USART3_IRQHandler

#define BSP_USARTx_TX_PIN                    GPIO_Pin_10                
#define BSP_USARTx_TX_GPIO_PORT              GPIOC                       
#define BSP_USARTx_TX_GPIO_CLK               RCC_AHB1Periph_GPIOC
#define BSP_USARTx_TX_SOURCE                 GPIO_PinSource10
#define BSP_USARTx_TX_AF                     GPIO_AF_USART3

#define BSP_USARTx_RX_PIN                    GPIO_Pin_11                
#define BSP_USARTx_RX_GPIO_PORT              GPIOC                    
#define BSP_USARTx_RX_GPIO_CLK               RCC_AHB1Periph_GPIOC
#define BSP_USARTx_RX_SOURCE                 GPIO_PinSource11
#define BSP_USARTx_RX_AF                     GPIO_AF_USART3
#endif

#define BSP_UARTx_BAUNDRATE                  115200

#endif
