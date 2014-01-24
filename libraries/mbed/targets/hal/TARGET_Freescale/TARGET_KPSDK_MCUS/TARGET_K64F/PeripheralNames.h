/* mbed Microcontroller Library
 * Copyright (c) 2006-2013 ARM Limited
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef MBED_PERIPHERALNAMES_H
#define MBED_PERIPHERALNAMES_H

#include "cmsis.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    UART_0 = (int)UART0_BASE,
    UART_1 = (int)UART1_BASE,
    UART_2 = (int)UART2_BASE
} UARTName;

#define STDIO_UART_TX     USBTX
#define STDIO_UART_RX     USBRX
#define STDIO_UART        UART_0

typedef enum {
    I2C_0 = (int)I2C0_BASE,
} I2CName;

#define TPM_SHIFT   8
typedef enum {
    PWM_1  = (0 << TPM_SHIFT) | (0),  // FTM0 CH0
    PWM_2  = (0 << TPM_SHIFT) | (1),  // FTM0 CH1
    PWM_3  = (0 << TPM_SHIFT) | (2),  // FTM0 CH2
    PWM_4  = (0 << TPM_SHIFT) | (3),  // FTM0 CH3
    PWM_5  = (0 << TPM_SHIFT) | (4),  // FTM0 CH4
    PWM_6  = (0 << TPM_SHIFT) | (5),  // FTM0 CH5
    PWM_7  = (0 << TPM_SHIFT) | (6),  // FTM0 CH6
    PWM_8  = (0 << TPM_SHIFT) | (7),  // FTM0 CH7
    PWM_9  = (1 << TPM_SHIFT) | (0),  // FTM1 CH0
    PWM_10 = (1 << TPM_SHIFT) | (1),  // FTM1 CH1
} PWMName;

#define ADC_SHIFT 8
typedef enum {
    ADC0_SE4b = (0 << ADC_SHIFT) | 4,
    ADC0_SE5b = (0 << ADC_SHIFT) | 5,
    ADC0_SE6b = (0 << ADC_SHIFT) | 6,
    ADC0_SE7b = (0 << ADC_SHIFT) | 7,
    ADC0_SE8  = (0 << ADC_SHIFT) | 8,
    ADC0_SE9  = (0 << ADC_SHIFT) | 9,
    ADC0_SE12 = (0 << ADC_SHIFT) | 12,
    ADC0_SE13 = (0 << ADC_SHIFT) | 13,
    ADC0_SE14 = (0 << ADC_SHIFT) | 14,
    ADC0_SE15 = (0 << ADC_SHIFT) | 15,
    ADC1_SE4b = (1 << ADC_SHIFT) | 4,
    ADC1_SE5b = (1 << ADC_SHIFT) | 5,
    ADC1_SE6b = (1 << ADC_SHIFT) | 6,
    ADC1_SE7b = (1 << ADC_SHIFT) | 7,
    ADC1_SE8  = (1 << ADC_SHIFT) | 8,
    ADC1_SE9  = (1 << ADC_SHIFT) | 9,
    ADC1_SE12 = (1 << ADC_SHIFT) | 12,
    ADC1_SE13 = (1 << ADC_SHIFT) | 13,
    ADC1_SE14 = (1 << ADC_SHIFT) | 14,
    ADC1_SE15 = (1 << ADC_SHIFT) | 15
} ADCName;

typedef enum {
    DAC_0 = 0
} DACName;


typedef enum {
    SPI_0 = (int)SPI0_BASE,
} SPIName;

#ifdef __cplusplus
}
#endif

#endif
