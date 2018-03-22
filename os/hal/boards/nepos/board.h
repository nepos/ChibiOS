/*
    ChibiOS - Copyright (C) 2006..2016 Giovanni Di Sirio

    Licensed under the Apache License, Version 2.0 (the "License");
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at

        http://www.apache.org/licenses/LICENSE-2.0

    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissions and
    limitations under the License.
*/

/*
 * This file has been automatically generated using ChibiStudio board
 * generator plugin. Do not edit manually.
 */

#ifndef BOARD_H
#define BOARD_H

/*
 * Setup for STMicroelectronics STM32 Nucleo64-F070RB board.
 */

/*
 * Board identifier.
 */
#define BOARD_NEPOS_SAPHIRA
#define BOARD_NAME                  "Nepos Saphira Companion Controller"

/*
 * Board oscillators-related settings.
 * NOTE: LSE not fitted.
 */
#if !defined(STM32_LSECLK)
#define STM32_LSECLK                32768U
#endif

#define STM32_LSEDRV                (3U << 3U)

#if !defined(STM32_HSECLK)
#define STM32_HSECLK                8000000U
#endif

#define STM32_HSE_BYPASS

/*
 * MCU type as defined in the ST header.
 */
#define STM32F030xC

/*
 * IO pins assignments.
 */
#define GPIOA_PIN0                  0U
#define GPIOA_PIN1                  1U
#define GPIOA_PIN2                  2U
#define GPIOA_PIN3                  3U
#define GPIOA_PIN4                  4U
#define GPIOA_PIN5                  5U
#define GPIOA_PIN6                  6U
#define GPIOA_PIN7                  7U
#define GPIOA_PIN8                  8U
#define GPIOA_PIN9                  9U
#define GPIOA_PIN10                 10U
#define GPIOA_PIN11                 11U
#define GPIOA_PIN12                 12U
#define GPIOA_PIN15                 15U

#define GPIOB_PIN0                  0U
#define GPIOB_PIN1                  1U
#define GPIOB_PIN2                  2U
#define GPIOB_PIN3                  3U
#define GPIOB_PIN4                  4U
#define GPIOB_PIN5                  5U
#define GPIOB_PIN6                  6U
#define GPIOB_PIN7                  7U
#define GPIOB_PIN8                  8U
#define GPIOB_PIN9                  9U
#define GPIOB_PIN10                 10U
#define GPIOB_PIN11                 11U
#define GPIOB_PIN12                 12U
#define GPIOB_PIN13                 13U
#define GPIOB_PIN14                 14U
#define GPIOB_PIN15                 15U

#define GPIOC_PIN0                  0U
#define GPIOC_PIN1                  1U
#define GPIOC_PIN2                  2U
#define GPIOC_PIN3                  3U
#define GPIOC_PIN4                  4U
#define GPIOC_PIN5                  5U
#define GPIOC_PIN6                  6U
#define GPIOC_PIN7                  7U
#define GPIOC_PIN8                  8U
#define GPIOC_PIN9                  9U
#define GPIOC_PIN10                 10U
#define GPIOC_PIN11                 11U
#define GPIOC_PIN12                 12U
#define GPIOC_PIN13                 13U
#define GPIOC_PIN14                 14U
#define GPIOC_PIN15                 15U

#define GPIOD_PIN0                  0U
#define GPIOD_PIN1                  1U
#define GPIOD_PIN2                  2U
#define GPIOD_PIN3                  3U
#define GPIOD_PIN4                  4U
#define GPIOD_PIN5                  5U
#define GPIOD_PIN6                  6U
#define GPIOD_PIN7                  7U
#define GPIOD_PIN8                  8U
#define GPIOD_PIN9                  9U
#define GPIOD_PIN10                 10U
#define GPIOD_PIN11                 11U
#define GPIOD_PIN12                 12U
#define GPIOD_PIN13                 13U
#define GPIOD_PIN14                 14U
#define GPIOD_PIN15                 15U

#define GPIOE_PIN0                  0U
#define GPIOE_PIN1                  1U
#define GPIOE_PIN2                  2U
#define GPIOE_PIN3                  3U
#define GPIOE_PIN4                  4U
#define GPIOE_PIN5                  5U
#define GPIOE_PIN6                  6U
#define GPIOE_PIN7                  7U
#define GPIOE_PIN8                  8U
#define GPIOE_PIN9                  9U
#define GPIOE_PIN10                 10U
#define GPIOE_PIN11                 11U
#define GPIOE_PIN12                 12U
#define GPIOE_PIN13                 13U
#define GPIOE_PIN14                 14U
#define GPIOE_PIN15                 15U

#define GPIOF_OSC_IN                0U
#define GPIOF_OSC_OUT               1U
#define GPIOF_PIN2                  2U
#define GPIOF_PIN3                  3U
#define GPIOF_PIN4                  4U
#define GPIOF_PIN5                  5U
#define GPIOF_PIN6                  6U
#define GPIOF_PIN7                  7U
#define GPIOF_PIN8                  8U
#define GPIOF_PIN9                  9U
#define GPIOF_PIN10                 10U
#define GPIOF_PIN11                 11U
#define GPIOF_PIN12                 12U
#define GPIOF_PIN13                 13U
#define GPIOF_PIN14                 14U
#define GPIOF_PIN15                 15U

/*
 * I/O ports initial setup, this configuration is established soon after reset
 * in the initialization code.
 * Please refer to the STM32 Reference Manual for details.
 */
#define PIN_MODE_INPUT(n)           (0U << ((n) * 2U))
#define PIN_MODE_OUTPUT(n)          (1U << ((n) * 2U))
#define PIN_MODE_ALTERNATE(n)       (2U << ((n) * 2U))
#define PIN_MODE_ANALOG(n)          (3U << ((n) * 2U))
#define PIN_ODR_LOW(n)              (0U << (n))
#define PIN_ODR_HIGH(n)             (1U << (n))
#define PIN_OTYPE_PUSHPULL(n)       (0U << (n))
#define PIN_OTYPE_OPENDRAIN(n)      (1U << (n))
#define PIN_OSPEED_VERYLOW(n)       (0U << ((n) * 2U))
#define PIN_OSPEED_LOW(n)           (1U << ((n) * 2U))
#define PIN_OSPEED_MEDIUM(n)        (2U << ((n) * 2U))
#define PIN_OSPEED_HIGH(n)          (3U << ((n) * 2U))
#define PIN_PUPDR_FLOATING(n)       (0U << ((n) * 2U))
#define PIN_PUPDR_PULLUP(n)         (1U << ((n) * 2U))
#define PIN_PUPDR_PULLDOWN(n)       (2U << ((n) * 2U))
#define PIN_AFIO_AF(n, v)           ((v) << (((n) % 8U) * 4U))

/*
 * GPIOA setup:
 *
 * PA0  - PIN0                      (input floating).
 * PA1  - PIN1                      (input floating).
 * PA2  - PIN2                      (input floating).
 * PA3  - PIN3                      (input floating).
 * PA4  - PIN4                      (input floating).
 * PA5  - PIN5                      (input floating).
 * PA6  - PIN6                      (input floating).
 * PA7  - PIN7                      (input floating).
 * PA8  - PIN8                      (input floating).
 * PA9  - PIN9                      (input floating).
 * PA10 - PIN10                     (input floating).
 * PA11 - PIN11                     (input floating).
 * PA12 - PIN12                     (input floating).
 * PA13 - PIN13                     IGNORED! This pin is also used for porgramming/debugging
 * PA14 - PIN14                     IGNORED! This pin is also used for porgramming/debugging
 * PA15 - PIN15                     (input floating).
 */
#define VAL_GPIOA_MODER             (PIN_MODE_INPUT(GPIOA_PIN0) |           \
                                     PIN_MODE_INPUT(GPIOA_PIN1) |           \
                                     PIN_MODE_INPUT(GPIOA_PIN2) |           \
                                     PIN_MODE_INPUT(GPIOA_PIN3) |           \
                                     PIN_MODE_INPUT(GPIOA_PIN4) |           \
                                     PIN_MODE_INPUT(GPIOA_PIN5) |           \
                                     PIN_MODE_INPUT(GPIOA_PIN6) |           \
                                     PIN_MODE_INPUT(GPIOA_PIN7) |           \
                                     PIN_MODE_INPUT(GPIOA_PIN8) |           \
                                     PIN_MODE_INPUT(GPIOA_PIN9) |           \
                                     PIN_MODE_INPUT(GPIOA_PIN10) |          \
                                     PIN_MODE_INPUT(GPIOA_PIN11) |          \
                                     PIN_MODE_INPUT(GPIOA_PIN12) |          \
                                     PIN_MODE_INPUT(GPIOA_PIN15))
#define VAL_GPIOA_OTYPER            (PIN_OTYPE_OPENDRAIN(GPIOA_PIN0) |       \
                                     PIN_OTYPE_OPENDRAIN(GPIOA_PIN1) |       \
                                     PIN_OTYPE_OPENDRAIN(GPIOA_PIN2) |       \
                                     PIN_OTYPE_OPENDRAIN(GPIOA_PIN3) |       \
                                     PIN_OTYPE_OPENDRAIN(GPIOA_PIN4) |       \
                                     PIN_OTYPE_OPENDRAIN(GPIOA_PIN5) |       \
                                     PIN_OTYPE_OPENDRAIN(GPIOA_PIN6) |       \
                                     PIN_OTYPE_OPENDRAIN(GPIOA_PIN7) |       \
                                     PIN_OTYPE_OPENDRAIN(GPIOA_PIN8) |       \
                                     PIN_OTYPE_OPENDRAIN(GPIOA_PIN9) |       \
                                     PIN_OTYPE_OPENDRAIN(GPIOA_PIN10) |      \
                                     PIN_OTYPE_OPENDRAIN(GPIOA_PIN11) |      \
                                     PIN_OTYPE_OPENDRAIN(GPIOA_PIN12) |      \
                                     PIN_OTYPE_OPENDRAIN(GPIOA_PIN15))
#define VAL_GPIOA_OSPEEDR           (PIN_OSPEED_HIGH(GPIOA_PIN0) |          \
                                     PIN_OSPEED_HIGH(GPIOA_PIN1) |          \
                                     PIN_OSPEED_HIGH(GPIOA_PIN2) |          \
                                     PIN_OSPEED_HIGH(GPIOA_PIN3) |          \
                                     PIN_OSPEED_HIGH(GPIOA_PIN4) |          \
                                     PIN_OSPEED_HIGH(GPIOA_PIN5) |          \
                                     PIN_OSPEED_HIGH(GPIOA_PIN6) |          \
                                     PIN_OSPEED_HIGH(GPIOA_PIN7) |          \
                                     PIN_OSPEED_HIGH(GPIOA_PIN8) |          \
                                     PIN_OSPEED_HIGH(GPIOA_PIN9) |          \
                                     PIN_OSPEED_HIGH(GPIOA_PIN10) |         \
                                     PIN_OSPEED_HIGH(GPIOA_PIN11) |         \
                                     PIN_OSPEED_HIGH(GPIOA_PIN12) |         \
                                     PIN_OSPEED_HIGH(GPIOA_PIN15))
#define VAL_GPIOA_PUPDR             (PIN_PUPDR_FLOATING(GPIOA_PIN0) |         \
                                     PIN_PUPDR_FLOATING(GPIOA_PIN1) |         \
                                     PIN_PUPDR_FLOATING(GPIOA_PIN2) |         \
                                     PIN_PUPDR_FLOATING(GPIOA_PIN3) |         \
                                     PIN_PUPDR_FLOATING(GPIOA_PIN4) |         \
                                     PIN_PUPDR_FLOATING(GPIOA_PIN5) |         \
                                     PIN_PUPDR_FLOATING(GPIOA_PIN6) |         \
                                     PIN_PUPDR_FLOATING(GPIOA_PIN7) |         \
                                     PIN_PUPDR_FLOATING(GPIOA_PIN8) |         \
                                     PIN_PUPDR_FLOATING(GPIOA_PIN9) |         \
                                     PIN_PUPDR_FLOATING(GPIOA_PIN10) |        \
                                     PIN_PUPDR_FLOATING(GPIOA_PIN11) |        \
                                     PIN_PUPDR_FLOATING(GPIOA_PIN12) |        \
                                     PIN_PUPDR_FLOATING(GPIOA_PIN15))
#define VAL_GPIOA_ODR               (PIN_ODR_HIGH(GPIOA_PIN0) |             \
                                     PIN_ODR_HIGH(GPIOA_PIN1) |             \
                                     PIN_ODR_HIGH(GPIOA_PIN2) |             \
                                     PIN_ODR_HIGH(GPIOA_PIN3) |             \
                                     PIN_ODR_HIGH(GPIOA_PIN4) |             \
                                     PIN_ODR_HIGH(GPIOA_PIN5) |             \
                                     PIN_ODR_HIGH(GPIOA_PIN6) |             \
                                     PIN_ODR_HIGH(GPIOA_PIN7) |             \
                                     PIN_ODR_HIGH(GPIOA_PIN8) |             \
                                     PIN_ODR_HIGH(GPIOA_PIN9) |             \
                                     PIN_ODR_HIGH(GPIOA_PIN10) |            \
                                     PIN_ODR_HIGH(GPIOA_PIN11) |            \
                                     PIN_ODR_HIGH(GPIOA_PIN12) |            \
                                     PIN_ODR_HIGH(GPIOA_PIN15))
#define VAL_GPIOA_AFRL              (PIN_AFIO_AF(GPIOA_PIN0, 0U) |          \
                                     PIN_AFIO_AF(GPIOA_PIN1, 0U) |          \
                                     PIN_AFIO_AF(GPIOA_PIN2, 0U) |          \
                                     PIN_AFIO_AF(GPIOA_PIN3, 0U) |          \
                                     PIN_AFIO_AF(GPIOA_PIN4, 0U) |          \
                                     PIN_AFIO_AF(GPIOA_PIN5, 0U) |          \
                                     PIN_AFIO_AF(GPIOA_PIN6, 0U) |          \
                                     PIN_AFIO_AF(GPIOA_PIN7, 0U))
#define VAL_GPIOA_AFRH              (PIN_AFIO_AF(GPIOA_PIN8, 0U) |          \
                                     PIN_AFIO_AF(GPIOA_PIN9, 0U) |          \
                                     PIN_AFIO_AF(GPIOA_PIN10, 0U) |         \
                                     PIN_AFIO_AF(GPIOA_PIN11, 0U) |         \
                                     PIN_AFIO_AF(GPIOA_PIN12, 0U) |         \
                                     PIN_AFIO_AF(GPIOA_PIN15, 0U))

/*
 * GPIOB setup:
 *
 * PB0  - PIN0                      (input floating).
 * PB1  - PIN1                      (input floating).
 * PB2  - PIN2                      (input floating).
 * PB3  - PIN3                      (input floating).
 * PB4  - PIN4                      (input floating).
 * PB5  - PIN5                      (input floating).
 * PB6  - PIN6                      (input floating).
 * PB7  - PIN7                      (input floating).
 * PB8  - PIN8                      (input floating).
 PB9: VBUS Enable must be keep low here, otherwise stm keeps resetting itself, if battery is empty
 * PB9  - PIN9                      (output pull-push low).
 * PB10 - PIN10                     (input floating).
 * PB11 - PIN11                     (input floating).
 * PB12 - PIN12                     (input floating).
 * PB13 - PIN13                     (input floating).
 * PB14 - PIN14                     (input floating).
 * PB15 - PIN15                     (input floating).
 */
#define VAL_GPIOB_MODER             (PIN_MODE_INPUT(GPIOB_PIN0) |           \
                                     PIN_MODE_OUTPUT(GPIOB_PIN1) |           \
                                     PIN_MODE_OUTPUT(GPIOB_PIN2) |           \
                                     PIN_MODE_INPUT(GPIOB_PIN3) |           \
                                     PIN_MODE_INPUT(GPIOB_PIN4) |           \
                                     PIN_MODE_INPUT(GPIOB_PIN5) |           \
                                     PIN_MODE_OUTPUT(GPIOB_PIN6) |           \
                                     PIN_MODE_INPUT(GPIOB_PIN7) |           \
                                     PIN_MODE_INPUT(GPIOB_PIN8) |           \
                                     PIN_MODE_OUTPUT(GPIOB_PIN9) |           \
                                     PIN_MODE_INPUT(GPIOB_PIN10) |          \
                                     PIN_MODE_INPUT(GPIOB_PIN11) |          \
                                     PIN_MODE_INPUT(GPIOB_PIN12) |          \
                                     PIN_MODE_INPUT(GPIOB_PIN13) |          \
                                     PIN_MODE_INPUT(GPIOB_PIN14) |          \
                                     PIN_MODE_INPUT(GPIOB_PIN15))
#define VAL_GPIOB_OTYPER            (PIN_OTYPE_OPENDRAIN(GPIOB_PIN0) |       \
                                     PIN_OTYPE_OPENDRAIN(GPIOB_PIN1) |       \
                                     PIN_OTYPE_OPENDRAIN(GPIOB_PIN2) |       \
                                     PIN_OTYPE_OPENDRAIN(GPIOB_PIN3) |       \
                                     PIN_OTYPE_OPENDRAIN(GPIOB_PIN4) |       \
                                     PIN_OTYPE_OPENDRAIN(GPIOB_PIN5) |       \
                                     PIN_OTYPE_OPENDRAIN(GPIOB_PIN6) |       \
                                     PIN_OTYPE_OPENDRAIN(GPIOB_PIN7) |       \
                                     PIN_OTYPE_OPENDRAIN(GPIOB_PIN8) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOB_PIN9) |       \
                                     PIN_OTYPE_OPENDRAIN(GPIOB_PIN10) |      \
                                     PIN_OTYPE_OPENDRAIN(GPIOB_PIN11) |      \
                                     PIN_OTYPE_OPENDRAIN(GPIOB_PIN12) |      \
                                     PIN_OTYPE_OPENDRAIN(GPIOB_PIN13) |      \
                                     PIN_OTYPE_OPENDRAIN(GPIOB_PIN14) |      \
                                     PIN_OTYPE_OPENDRAIN(GPIOB_PIN15))
#define VAL_GPIOB_OSPEEDR           (PIN_OSPEED_HIGH(GPIOB_PIN0) |          \
                                     PIN_OSPEED_HIGH(GPIOB_PIN1) |          \
                                     PIN_OSPEED_HIGH(GPIOB_PIN2) |          \
                                     PIN_OSPEED_HIGH(GPIOB_PIN3) |          \
                                     PIN_OSPEED_HIGH(GPIOB_PIN4) |          \
                                     PIN_OSPEED_HIGH(GPIOB_PIN5) |          \
                                     PIN_OSPEED_HIGH(GPIOB_PIN6) |          \
                                     PIN_OSPEED_HIGH(GPIOB_PIN7) |          \
                                     PIN_OSPEED_HIGH(GPIOB_PIN8) |          \
                                     PIN_OSPEED_HIGH(GPIOB_PIN9) |          \
                                     PIN_OSPEED_HIGH(GPIOB_PIN10) |         \
                                     PIN_OSPEED_HIGH(GPIOB_PIN11) |         \
                                     PIN_OSPEED_HIGH(GPIOB_PIN12) |         \
                                     PIN_OSPEED_HIGH(GPIOB_PIN13) |         \
                                     PIN_OSPEED_HIGH(GPIOB_PIN14) |         \
                                     PIN_OSPEED_HIGH(GPIOB_PIN15))
#define VAL_GPIOB_PUPDR             (PIN_PUPDR_FLOATING(GPIOB_PIN0) |         \
                                     PIN_PUPDR_FLOATING(GPIOB_PIN1) |         \
                                     PIN_PUPDR_FLOATING(GPIOB_PIN2) |         \
                                     PIN_PUPDR_FLOATING(GPIOB_PIN3) |         \
                                     PIN_PUPDR_FLOATING(GPIOB_PIN4) |         \
                                     PIN_PUPDR_FLOATING(GPIOB_PIN5) |         \
                                     PIN_PUPDR_FLOATING(GPIOB_PIN6) |         \
                                     PIN_PUPDR_FLOATING(GPIOB_PIN7) |         \
                                     PIN_PUPDR_FLOATING(GPIOB_PIN8) |         \
                                     PIN_PUPDR_FLOATING(GPIOB_PIN9) |         \
                                     PIN_PUPDR_FLOATING(GPIOB_PIN10) |        \
                                     PIN_PUPDR_FLOATING(GPIOB_PIN11) |        \
                                     PIN_PUPDR_FLOATING(GPIOB_PIN12) |        \
                                     PIN_PUPDR_FLOATING(GPIOB_PIN13) |        \
                                     PIN_PUPDR_FLOATING(GPIOB_PIN14) |        \
                                     PIN_PUPDR_FLOATING(GPIOB_PIN15))
#define VAL_GPIOB_ODR               (PIN_ODR_HIGH(GPIOB_PIN0) |             \
                                     PIN_ODR_HIGH(GPIOB_PIN1) |             \
                                     PIN_ODR_HIGH(GPIOB_PIN2) |             \
                                     PIN_ODR_HIGH(GPIOB_PIN3) |             \
                                     PIN_ODR_HIGH(GPIOB_PIN4) |             \
                                     PIN_ODR_HIGH(GPIOB_PIN5) |             \
                                     PIN_ODR_HIGH(GPIOB_PIN6) |             \
                                     PIN_ODR_HIGH(GPIOB_PIN7) |             \
                                     PIN_ODR_HIGH(GPIOB_PIN8) |             \
                                     PIN_ODR_LOW(GPIOB_PIN9)  |             \
                                     PIN_ODR_HIGH(GPIOB_PIN10) |            \
                                     PIN_ODR_HIGH(GPIOB_PIN11) |            \
                                     PIN_ODR_HIGH(GPIOB_PIN12) |            \
                                     PIN_ODR_HIGH(GPIOB_PIN13) |            \
                                     PIN_ODR_HIGH(GPIOB_PIN14) |            \
                                     PIN_ODR_HIGH(GPIOB_PIN15))
#define VAL_GPIOB_AFRL              (PIN_AFIO_AF(GPIOB_PIN0, 0U) |          \
                                     PIN_AFIO_AF(GPIOB_PIN1, 0U) |          \
                                     PIN_AFIO_AF(GPIOB_PIN2, 0U) |          \
                                     PIN_AFIO_AF(GPIOB_PIN3, 0U) |          \
                                     PIN_AFIO_AF(GPIOB_PIN4, 0U) |          \
                                     PIN_AFIO_AF(GPIOB_PIN5, 0U) |          \
                                     PIN_AFIO_AF(GPIOB_PIN6, 0U) |          \
                                     PIN_AFIO_AF(GPIOB_PIN7, 0U))
#define VAL_GPIOB_AFRH              (PIN_AFIO_AF(GPIOB_PIN8, 0U) |          \
                                     PIN_AFIO_AF(GPIOB_PIN9, 0U) |          \
                                     PIN_AFIO_AF(GPIOB_PIN10, 0U) |         \
                                     PIN_AFIO_AF(GPIOB_PIN11, 0U) |         \
                                     PIN_AFIO_AF(GPIOB_PIN12, 0U) |         \
                                     PIN_AFIO_AF(GPIOB_PIN13, 0U) |         \
                                     PIN_AFIO_AF(GPIOB_PIN14, 0U) |         \
                                     PIN_AFIO_AF(GPIOB_PIN15, 0U))

/*
 * GPIOC setup:
 *
 * PC0  - PIN0                      (input floating).
 * PC1  - PIN1                      (input floating).
 * PC2  - PIN2                      (input floating).
 * PC3  - PIN3                      (input floating).
 * PC4  - PIN4                      (input floating).
 * PC5  - PIN5                      (input floating).
 * PC6  - PIN6                      (input floating).
 * PC7  - PIN7                      (input floating).
 * PC8  - PIN8                      (input floating).
 * PC9  - PIN9                      (input floating).
 * PC10 - PIN10                     (input floating).
 * PC11 - PIN11                     (input floating).
 * PC12 - PIN12                     (input floating).
 * PC13 - PIN13                     (input floating).
 * PC14 - PIN14                     (input floating).
 * PC15 - PIN15                     (input floating).
 */
#define VAL_GPIOC_MODER             (PIN_MODE_INPUT(GPIOC_PIN0) |           \
                                     PIN_MODE_INPUT(GPIOC_PIN1) |           \
                                     PIN_MODE_INPUT(GPIOC_PIN2) |           \
                                     PIN_MODE_INPUT(GPIOC_PIN3) |           \
                                     PIN_MODE_INPUT(GPIOC_PIN4) |           \
                                     PIN_MODE_INPUT(GPIOC_PIN5) |           \
                                     PIN_MODE_INPUT(GPIOC_PIN6) |           \
                                     PIN_MODE_INPUT(GPIOC_PIN7) |           \
                                     PIN_MODE_INPUT(GPIOC_PIN8) |           \
                                     PIN_MODE_INPUT(GPIOC_PIN9) |           \
                                     PIN_MODE_INPUT(GPIOC_PIN10) |          \
                                     PIN_MODE_INPUT(GPIOC_PIN11) |          \
                                     PIN_MODE_INPUT(GPIOC_PIN12) |          \
                                     PIN_MODE_INPUT(GPIOC_PIN13) |          \
                                     PIN_MODE_INPUT(GPIOC_PIN14) |          \
                                     PIN_MODE_INPUT(GPIOC_PIN15))
#define VAL_GPIOC_OTYPER            (PIN_OTYPE_OPENDRAIN(GPIOC_PIN0) |       \
                                     PIN_OTYPE_OPENDRAIN(GPIOC_PIN1) |       \
                                     PIN_OTYPE_OPENDRAIN(GPIOC_PIN2) |       \
                                     PIN_OTYPE_OPENDRAIN(GPIOC_PIN3) |       \
                                     PIN_OTYPE_OPENDRAIN(GPIOC_PIN4) |       \
                                     PIN_OTYPE_OPENDRAIN(GPIOC_PIN5) |       \
                                     PIN_OTYPE_OPENDRAIN(GPIOC_PIN6) |       \
                                     PIN_OTYPE_OPENDRAIN(GPIOC_PIN7) |       \
                                     PIN_OTYPE_OPENDRAIN(GPIOC_PIN8) |       \
                                     PIN_OTYPE_OPENDRAIN(GPIOC_PIN9) |       \
                                     PIN_OTYPE_OPENDRAIN(GPIOC_PIN10) |      \
                                     PIN_OTYPE_OPENDRAIN(GPIOC_PIN11) |      \
                                     PIN_OTYPE_OPENDRAIN(GPIOC_PIN12) |      \
                                     PIN_OTYPE_OPENDRAIN(GPIOC_PIN13) |      \
                                     PIN_OTYPE_OPENDRAIN(GPIOC_PIN14) |      \
                                     PIN_OTYPE_OPENDRAIN(GPIOC_PIN15))
#define VAL_GPIOC_OSPEEDR           (PIN_OSPEED_HIGH(GPIOC_PIN0) |          \
                                     PIN_OSPEED_HIGH(GPIOC_PIN1) |          \
                                     PIN_OSPEED_HIGH(GPIOC_PIN2) |          \
                                     PIN_OSPEED_HIGH(GPIOC_PIN3) |          \
                                     PIN_OSPEED_HIGH(GPIOC_PIN4) |          \
                                     PIN_OSPEED_HIGH(GPIOC_PIN5) |          \
                                     PIN_OSPEED_HIGH(GPIOC_PIN6) |          \
                                     PIN_OSPEED_HIGH(GPIOC_PIN7) |          \
                                     PIN_OSPEED_HIGH(GPIOC_PIN8) |          \
                                     PIN_OSPEED_HIGH(GPIOC_PIN9) |          \
                                     PIN_OSPEED_HIGH(GPIOC_PIN10) |         \
                                     PIN_OSPEED_HIGH(GPIOC_PIN11) |         \
                                     PIN_OSPEED_HIGH(GPIOC_PIN12) |         \
                                     PIN_OSPEED_HIGH(GPIOC_PIN13) |         \
                                     PIN_OSPEED_HIGH(GPIOC_PIN14) |         \
                                     PIN_OSPEED_HIGH(GPIOC_PIN15))
#define VAL_GPIOC_PUPDR             (PIN_PUPDR_FLOATING(GPIOC_PIN0) |         \
                                     PIN_PUPDR_FLOATING(GPIOC_PIN1) |         \
                                     PIN_PUPDR_FLOATING(GPIOC_PIN2) |         \
                                     PIN_PUPDR_FLOATING(GPIOC_PIN3) |         \
                                     PIN_PUPDR_FLOATING(GPIOC_PIN4) |         \
                                     PIN_PUPDR_FLOATING(GPIOC_PIN5) |         \
                                     PIN_PUPDR_FLOATING(GPIOC_PIN6) |         \
                                     PIN_PUPDR_FLOATING(GPIOC_PIN7) |         \
                                     PIN_PUPDR_FLOATING(GPIOC_PIN8) |         \
                                     PIN_PUPDR_FLOATING(GPIOC_PIN9) |         \
                                     PIN_PUPDR_FLOATING(GPIOC_PIN10) |        \
                                     PIN_PUPDR_FLOATING(GPIOC_PIN11) |        \
                                     PIN_PUPDR_FLOATING(GPIOC_PIN12) |        \
                                     PIN_PUPDR_FLOATING(GPIOC_PIN13) |        \
                                     PIN_PUPDR_FLOATING(GPIOC_PIN14) |        \
                                     PIN_PUPDR_FLOATING(GPIOC_PIN15))
#define VAL_GPIOC_ODR               (PIN_ODR_HIGH(GPIOC_PIN0) |             \
                                     PIN_ODR_HIGH(GPIOC_PIN1) |             \
                                     PIN_ODR_HIGH(GPIOC_PIN2) |             \
                                     PIN_ODR_HIGH(GPIOC_PIN3) |             \
                                     PIN_ODR_HIGH(GPIOC_PIN4) |             \
                                     PIN_ODR_HIGH(GPIOC_PIN5) |             \
                                     PIN_ODR_HIGH(GPIOC_PIN6) |             \
                                     PIN_ODR_HIGH(GPIOC_PIN7) |             \
                                     PIN_ODR_HIGH(GPIOC_PIN8) |             \
                                     PIN_ODR_HIGH(GPIOC_PIN9) |             \
                                     PIN_ODR_HIGH(GPIOC_PIN10) |            \
                                     PIN_ODR_HIGH(GPIOC_PIN11) |            \
                                     PIN_ODR_HIGH(GPIOC_PIN12) |            \
                                     PIN_ODR_HIGH(GPIOC_PIN13) |            \
                                     PIN_ODR_HIGH(GPIOC_PIN14) |            \
                                     PIN_ODR_HIGH(GPIOC_PIN15))
#define VAL_GPIOC_AFRL              (PIN_AFIO_AF(GPIOC_PIN0, 0U) |          \
                                     PIN_AFIO_AF(GPIOC_PIN1, 0U) |          \
                                     PIN_AFIO_AF(GPIOC_PIN2, 0U) |          \
                                     PIN_AFIO_AF(GPIOC_PIN3, 0U) |          \
                                     PIN_AFIO_AF(GPIOC_PIN4, 0U) |          \
                                     PIN_AFIO_AF(GPIOC_PIN5, 0U) |          \
                                     PIN_AFIO_AF(GPIOC_PIN6, 0U) |          \
                                     PIN_AFIO_AF(GPIOC_PIN7, 0U))
#define VAL_GPIOC_AFRH              (PIN_AFIO_AF(GPIOC_PIN8, 0U) |          \
                                     PIN_AFIO_AF(GPIOC_PIN9, 0U) |          \
                                     PIN_AFIO_AF(GPIOC_PIN10, 0U) |         \
                                     PIN_AFIO_AF(GPIOC_PIN11, 0U) |         \
                                     PIN_AFIO_AF(GPIOC_PIN12, 0U) |         \
                                     PIN_AFIO_AF(GPIOC_PIN13, 0U) |         \
                                     PIN_AFIO_AF(GPIOC_PIN14, 0U) |         \
                                     PIN_AFIO_AF(GPIOC_PIN15, 0U))

/*
 * GPIOD setup:
 *
 * PD0  - PIN0                      (input floating).
 * PD1  - PIN1                      (input floating).
 * PD2  - PIN2                      (input floating).
 * PD3  - PIN3                      (input floating).
 * PD4  - PIN4                      (input floating).
 * PD5  - PIN5                      (input floating).
 * PD6  - PIN6                      (input floating).
 * PD7  - PIN7                      (input floating).
 * PD8  - PIN8                      (input floating).
 * PD9  - PIN9                      (input floating).
 * PD10 - PIN10                     (input floating).
 * PD11 - PIN11                     (input floating).
 * PD12 - PIN12                     (input floating).
 * PD13 - PIN13                     (input floating).
 * PD14 - PIN14                     (input floating).
 * PD15 - PIN15                     (input floating).
 */
#define VAL_GPIOD_MODER             (PIN_MODE_INPUT(GPIOD_PIN0) |           \
                                     PIN_MODE_INPUT(GPIOD_PIN1) |           \
                                     PIN_MODE_INPUT(GPIOD_PIN2) |           \
                                     PIN_MODE_INPUT(GPIOD_PIN3) |           \
                                     PIN_MODE_INPUT(GPIOD_PIN4) |           \
                                     PIN_MODE_INPUT(GPIOD_PIN5) |           \
                                     PIN_MODE_INPUT(GPIOD_PIN6) |           \
                                     PIN_MODE_INPUT(GPIOD_PIN7) |           \
                                     PIN_MODE_INPUT(GPIOD_PIN8) |           \
                                     PIN_MODE_INPUT(GPIOD_PIN9) |           \
                                     PIN_MODE_INPUT(GPIOD_PIN10) |          \
                                     PIN_MODE_INPUT(GPIOD_PIN11) |          \
                                     PIN_MODE_INPUT(GPIOD_PIN12) |          \
                                     PIN_MODE_INPUT(GPIOD_PIN13) |          \
                                     PIN_MODE_INPUT(GPIOD_PIN14) |          \
                                     PIN_MODE_INPUT(GPIOD_PIN15))
#define VAL_GPIOD_OTYPER            (PIN_OTYPE_OPENDRAIN(GPIOD_PIN0) |       \
                                     PIN_OTYPE_OPENDRAIN(GPIOD_PIN1) |       \
                                     PIN_OTYPE_OPENDRAIN(GPIOD_PIN2) |       \
                                     PIN_OTYPE_OPENDRAIN(GPIOD_PIN3) |       \
                                     PIN_OTYPE_OPENDRAIN(GPIOD_PIN4) |       \
                                     PIN_OTYPE_OPENDRAIN(GPIOD_PIN5) |       \
                                     PIN_OTYPE_OPENDRAIN(GPIOD_PIN6) |       \
                                     PIN_OTYPE_OPENDRAIN(GPIOD_PIN7) |       \
                                     PIN_OTYPE_OPENDRAIN(GPIOD_PIN8) |       \
                                     PIN_OTYPE_OPENDRAIN(GPIOD_PIN9) |       \
                                     PIN_OTYPE_OPENDRAIN(GPIOD_PIN10) |      \
                                     PIN_OTYPE_OPENDRAIN(GPIOD_PIN11) |      \
                                     PIN_OTYPE_OPENDRAIN(GPIOD_PIN12) |      \
                                     PIN_OTYPE_OPENDRAIN(GPIOD_PIN13) |      \
                                     PIN_OTYPE_OPENDRAIN(GPIOD_PIN14) |      \
                                     PIN_OTYPE_OPENDRAIN(GPIOD_PIN15))
#define VAL_GPIOD_OSPEEDR           (PIN_OSPEED_HIGH(GPIOD_PIN0) |          \
                                     PIN_OSPEED_HIGH(GPIOD_PIN1) |          \
                                     PIN_OSPEED_HIGH(GPIOD_PIN2) |          \
                                     PIN_OSPEED_HIGH(GPIOD_PIN3) |          \
                                     PIN_OSPEED_HIGH(GPIOD_PIN4) |          \
                                     PIN_OSPEED_HIGH(GPIOD_PIN5) |          \
                                     PIN_OSPEED_HIGH(GPIOD_PIN6) |          \
                                     PIN_OSPEED_HIGH(GPIOD_PIN7) |          \
                                     PIN_OSPEED_HIGH(GPIOD_PIN8) |          \
                                     PIN_OSPEED_HIGH(GPIOD_PIN9) |          \
                                     PIN_OSPEED_HIGH(GPIOD_PIN10) |         \
                                     PIN_OSPEED_HIGH(GPIOD_PIN11) |         \
                                     PIN_OSPEED_HIGH(GPIOD_PIN12) |         \
                                     PIN_OSPEED_HIGH(GPIOD_PIN13) |         \
                                     PIN_OSPEED_HIGH(GPIOD_PIN14) |         \
                                     PIN_OSPEED_HIGH(GPIOD_PIN15))
#define VAL_GPIOD_PUPDR             (PIN_PUPDR_FLOATING(GPIOD_PIN0) |         \
                                     PIN_PUPDR_FLOATING(GPIOD_PIN1) |         \
                                     PIN_PUPDR_FLOATING(GPIOD_PIN2) |         \
                                     PIN_PUPDR_FLOATING(GPIOD_PIN3) |         \
                                     PIN_PUPDR_FLOATING(GPIOD_PIN4) |         \
                                     PIN_PUPDR_FLOATING(GPIOD_PIN5) |         \
                                     PIN_PUPDR_FLOATING(GPIOD_PIN6) |         \
                                     PIN_PUPDR_FLOATING(GPIOD_PIN7) |         \
                                     PIN_PUPDR_FLOATING(GPIOD_PIN8) |         \
                                     PIN_PUPDR_FLOATING(GPIOD_PIN9) |         \
                                     PIN_PUPDR_FLOATING(GPIOD_PIN10) |        \
                                     PIN_PUPDR_FLOATING(GPIOD_PIN11) |        \
                                     PIN_PUPDR_FLOATING(GPIOD_PIN12) |        \
                                     PIN_PUPDR_FLOATING(GPIOD_PIN13) |        \
                                     PIN_PUPDR_FLOATING(GPIOD_PIN14) |        \
                                     PIN_PUPDR_FLOATING(GPIOD_PIN15))
#define VAL_GPIOD_ODR               (PIN_ODR_HIGH(GPIOD_PIN0) |             \
                                     PIN_ODR_HIGH(GPIOD_PIN1) |             \
                                     PIN_ODR_HIGH(GPIOD_PIN2) |             \
                                     PIN_ODR_HIGH(GPIOD_PIN3) |             \
                                     PIN_ODR_HIGH(GPIOD_PIN4) |             \
                                     PIN_ODR_HIGH(GPIOD_PIN5) |             \
                                     PIN_ODR_HIGH(GPIOD_PIN6) |             \
                                     PIN_ODR_HIGH(GPIOD_PIN7) |             \
                                     PIN_ODR_HIGH(GPIOD_PIN8) |             \
                                     PIN_ODR_HIGH(GPIOD_PIN9) |             \
                                     PIN_ODR_HIGH(GPIOD_PIN10) |            \
                                     PIN_ODR_HIGH(GPIOD_PIN11) |            \
                                     PIN_ODR_HIGH(GPIOD_PIN12) |            \
                                     PIN_ODR_HIGH(GPIOD_PIN13) |            \
                                     PIN_ODR_HIGH(GPIOD_PIN14) |            \
                                     PIN_ODR_HIGH(GPIOD_PIN15))
#define VAL_GPIOD_AFRL              (PIN_AFIO_AF(GPIOD_PIN0, 0U) |          \
                                     PIN_AFIO_AF(GPIOD_PIN1, 0U) |          \
                                     PIN_AFIO_AF(GPIOD_PIN2, 0U) |          \
                                     PIN_AFIO_AF(GPIOD_PIN3, 0U) |          \
                                     PIN_AFIO_AF(GPIOD_PIN4, 0U) |          \
                                     PIN_AFIO_AF(GPIOD_PIN5, 0U) |          \
                                     PIN_AFIO_AF(GPIOD_PIN6, 0U) |          \
                                     PIN_AFIO_AF(GPIOD_PIN7, 0U))
#define VAL_GPIOD_AFRH              (PIN_AFIO_AF(GPIOD_PIN8, 0U) |          \
                                     PIN_AFIO_AF(GPIOD_PIN9, 0U) |          \
                                     PIN_AFIO_AF(GPIOD_PIN10, 0U) |         \
                                     PIN_AFIO_AF(GPIOD_PIN11, 0U) |         \
                                     PIN_AFIO_AF(GPIOD_PIN12, 0U) |         \
                                     PIN_AFIO_AF(GPIOD_PIN13, 0U) |         \
                                     PIN_AFIO_AF(GPIOD_PIN14, 0U) |         \
                                     PIN_AFIO_AF(GPIOD_PIN15, 0U))

/*
 * GPIOE setup:
 *
 * PE0  - PIN0                      (input floating).
 * PE1  - PIN1                      (input floating).
 * PE2  - PIN2                      (input floating).
 * PE3  - PIN3                      (input floating).
 * PE4  - PIN4                      (input floating).
 * PE5  - PIN5                      (input floating).
 * PE6  - PIN6                      (input floating).
 * PE7  - PIN7                      (input floating).
 * PE8  - PIN8                      (input floating).
 * PE9  - PIN9                      (input floating).
 * PE10 - PIN10                     (input floating).
 * PE11 - PIN11                     (input floating).
 * PE12 - PIN12                     (input floating).
 * PE13 - PIN13                     (input floating).
 * PE14 - PIN14                     (input floating).
 * PE15 - PIN15                     (input floating).
 */
#define VAL_GPIOE_MODER             (PIN_MODE_INPUT(GPIOE_PIN0) |           \
                                     PIN_MODE_INPUT(GPIOE_PIN1) |           \
                                     PIN_MODE_INPUT(GPIOE_PIN2) |           \
                                     PIN_MODE_INPUT(GPIOE_PIN3) |           \
                                     PIN_MODE_INPUT(GPIOE_PIN4) |           \
                                     PIN_MODE_INPUT(GPIOE_PIN5) |           \
                                     PIN_MODE_INPUT(GPIOE_PIN6) |           \
                                     PIN_MODE_INPUT(GPIOE_PIN7) |           \
                                     PIN_MODE_INPUT(GPIOE_PIN8) |           \
                                     PIN_MODE_INPUT(GPIOE_PIN9) |           \
                                     PIN_MODE_INPUT(GPIOE_PIN10) |          \
                                     PIN_MODE_INPUT(GPIOE_PIN11) |          \
                                     PIN_MODE_INPUT(GPIOE_PIN12) |          \
                                     PIN_MODE_INPUT(GPIOE_PIN13) |          \
                                     PIN_MODE_INPUT(GPIOE_PIN14) |          \
                                     PIN_MODE_INPUT(GPIOE_PIN15))
#define VAL_GPIOE_OTYPER            (PIN_OTYPE_OPENDRAIN(GPIOE_PIN0) |       \
                                     PIN_OTYPE_OPENDRAIN(GPIOE_PIN1) |       \
                                     PIN_OTYPE_OPENDRAIN(GPIOE_PIN2) |       \
                                     PIN_OTYPE_OPENDRAIN(GPIOE_PIN3) |       \
                                     PIN_OTYPE_OPENDRAIN(GPIOE_PIN4) |       \
                                     PIN_OTYPE_OPENDRAIN(GPIOE_PIN5) |       \
                                     PIN_OTYPE_OPENDRAIN(GPIOE_PIN6) |       \
                                     PIN_OTYPE_OPENDRAIN(GPIOE_PIN7) |       \
                                     PIN_OTYPE_OPENDRAIN(GPIOE_PIN8) |       \
                                     PIN_OTYPE_OPENDRAIN(GPIOE_PIN9) |       \
                                     PIN_OTYPE_OPENDRAIN(GPIOE_PIN10) |      \
                                     PIN_OTYPE_OPENDRAIN(GPIOE_PIN11) |      \
                                     PIN_OTYPE_OPENDRAIN(GPIOE_PIN12) |      \
                                     PIN_OTYPE_OPENDRAIN(GPIOE_PIN13) |      \
                                     PIN_OTYPE_OPENDRAIN(GPIOE_PIN14) |      \
                                     PIN_OTYPE_OPENDRAIN(GPIOE_PIN15))
#define VAL_GPIOE_OSPEEDR           (PIN_OSPEED_HIGH(GPIOE_PIN0) |          \
                                     PIN_OSPEED_HIGH(GPIOE_PIN1) |          \
                                     PIN_OSPEED_HIGH(GPIOE_PIN2) |          \
                                     PIN_OSPEED_HIGH(GPIOE_PIN3) |          \
                                     PIN_OSPEED_HIGH(GPIOE_PIN4) |          \
                                     PIN_OSPEED_HIGH(GPIOE_PIN5) |          \
                                     PIN_OSPEED_HIGH(GPIOE_PIN6) |          \
                                     PIN_OSPEED_HIGH(GPIOE_PIN7) |          \
                                     PIN_OSPEED_HIGH(GPIOE_PIN8) |          \
                                     PIN_OSPEED_HIGH(GPIOE_PIN9) |          \
                                     PIN_OSPEED_HIGH(GPIOE_PIN10) |         \
                                     PIN_OSPEED_HIGH(GPIOE_PIN11) |         \
                                     PIN_OSPEED_HIGH(GPIOE_PIN12) |         \
                                     PIN_OSPEED_HIGH(GPIOE_PIN13) |         \
                                     PIN_OSPEED_HIGH(GPIOE_PIN14) |         \
                                     PIN_OSPEED_HIGH(GPIOE_PIN15))
#define VAL_GPIOE_PUPDR             (PIN_PUPDR_FLOATING(GPIOE_PIN0) |         \
                                     PIN_PUPDR_FLOATING(GPIOE_PIN1) |         \
                                     PIN_PUPDR_FLOATING(GPIOE_PIN2) |         \
                                     PIN_PUPDR_FLOATING(GPIOE_PIN3) |         \
                                     PIN_PUPDR_FLOATING(GPIOE_PIN4) |         \
                                     PIN_PUPDR_FLOATING(GPIOE_PIN5) |         \
                                     PIN_PUPDR_FLOATING(GPIOE_PIN6) |         \
                                     PIN_PUPDR_FLOATING(GPIOE_PIN7) |         \
                                     PIN_PUPDR_FLOATING(GPIOE_PIN8) |         \
                                     PIN_PUPDR_FLOATING(GPIOE_PIN9) |         \
                                     PIN_PUPDR_FLOATING(GPIOE_PIN10) |        \
                                     PIN_PUPDR_FLOATING(GPIOE_PIN11) |        \
                                     PIN_PUPDR_FLOATING(GPIOE_PIN12) |        \
                                     PIN_PUPDR_FLOATING(GPIOE_PIN13) |        \
                                     PIN_PUPDR_FLOATING(GPIOE_PIN14) |        \
                                     PIN_PUPDR_FLOATING(GPIOE_PIN15))
#define VAL_GPIOE_ODR               (PIN_ODR_HIGH(GPIOE_PIN0) |             \
                                     PIN_ODR_HIGH(GPIOE_PIN1) |             \
                                     PIN_ODR_HIGH(GPIOE_PIN2) |             \
                                     PIN_ODR_HIGH(GPIOE_PIN3) |             \
                                     PIN_ODR_HIGH(GPIOE_PIN4) |             \
                                     PIN_ODR_HIGH(GPIOE_PIN5) |             \
                                     PIN_ODR_HIGH(GPIOE_PIN6) |             \
                                     PIN_ODR_HIGH(GPIOE_PIN7) |             \
                                     PIN_ODR_HIGH(GPIOE_PIN8) |             \
                                     PIN_ODR_HIGH(GPIOE_PIN9) |             \
                                     PIN_ODR_HIGH(GPIOE_PIN10) |            \
                                     PIN_ODR_HIGH(GPIOE_PIN11) |            \
                                     PIN_ODR_HIGH(GPIOE_PIN12) |            \
                                     PIN_ODR_HIGH(GPIOE_PIN13) |            \
                                     PIN_ODR_HIGH(GPIOE_PIN14) |            \
                                     PIN_ODR_HIGH(GPIOE_PIN15))
#define VAL_GPIOE_AFRL              (PIN_AFIO_AF(GPIOE_PIN0, 0U) |          \
                                     PIN_AFIO_AF(GPIOE_PIN1, 0U) |          \
                                     PIN_AFIO_AF(GPIOE_PIN2, 0U) |          \
                                     PIN_AFIO_AF(GPIOE_PIN3, 0U) |          \
                                     PIN_AFIO_AF(GPIOE_PIN4, 0U) |          \
                                     PIN_AFIO_AF(GPIOE_PIN5, 0U) |          \
                                     PIN_AFIO_AF(GPIOE_PIN6, 0U) |          \
                                     PIN_AFIO_AF(GPIOE_PIN7, 0U))
#define VAL_GPIOE_AFRH              (PIN_AFIO_AF(GPIOE_PIN8, 0U) |          \
                                     PIN_AFIO_AF(GPIOE_PIN9, 0U) |          \
                                     PIN_AFIO_AF(GPIOE_PIN10, 0U) |         \
                                     PIN_AFIO_AF(GPIOE_PIN11, 0U) |         \
                                     PIN_AFIO_AF(GPIOE_PIN12, 0U) |         \
                                     PIN_AFIO_AF(GPIOE_PIN13, 0U) |         \
                                     PIN_AFIO_AF(GPIOE_PIN14, 0U) |         \
                                     PIN_AFIO_AF(GPIOE_PIN15, 0U))

/*
 * GPIOF setup:
 *
 * PF0  - OSC_IN                    (input floating).
 * PF1  - OSC_OUT                   (input floating).
 * PF2  - PIN2                      (input floating).
 * PF3  - PIN3                      (input floating).
 * PF4  - PIN4                      (input floating).
 * PF5  - PIN5                      (input floating).
 * PF6  - PIN6                      (input floating).
 * PF7  - PIN7                      (input floating).
 * PF8  - PIN8                      (input floating).
 * PF9  - PIN9                      (input floating).
 * PF10 - PIN10                     (input floating).
 * PF11 - PIN11                     (input floating).
 * PF12 - PIN12                     (input floating).
 * PF13 - PIN13                     (input floating).
 * PF14 - PIN14                     (input floating).
 * PF15 - PIN15                     (input floating).
 */
#define VAL_GPIOF_MODER             (PIN_MODE_INPUT(GPIOF_OSC_IN) |         \
                                     PIN_MODE_INPUT(GPIOF_OSC_OUT) |        \
                                     PIN_MODE_INPUT(GPIOF_PIN2) |           \
                                     PIN_MODE_INPUT(GPIOF_PIN3) |           \
                                     PIN_MODE_INPUT(GPIOF_PIN4) |           \
                                     PIN_MODE_INPUT(GPIOF_PIN5) |           \
                                     PIN_MODE_INPUT(GPIOF_PIN6) |           \
                                     PIN_MODE_INPUT(GPIOF_PIN7) |           \
                                     PIN_MODE_INPUT(GPIOF_PIN8) |           \
                                     PIN_MODE_INPUT(GPIOF_PIN9) |           \
                                     PIN_MODE_INPUT(GPIOF_PIN10) |          \
                                     PIN_MODE_INPUT(GPIOF_PIN11) |          \
                                     PIN_MODE_INPUT(GPIOF_PIN12) |          \
                                     PIN_MODE_INPUT(GPIOF_PIN13) |          \
                                     PIN_MODE_INPUT(GPIOF_PIN14) |          \
                                     PIN_MODE_INPUT(GPIOF_PIN15))
#define VAL_GPIOF_OTYPER            (PIN_OTYPE_OPENDRAIN(GPIOF_OSC_IN) |     \
                                     PIN_OTYPE_OPENDRAIN(GPIOF_OSC_OUT) |    \
                                     PIN_OTYPE_OPENDRAIN(GPIOF_PIN2) |       \
                                     PIN_OTYPE_OPENDRAIN(GPIOF_PIN3) |       \
                                     PIN_OTYPE_OPENDRAIN(GPIOF_PIN4) |       \
                                     PIN_OTYPE_OPENDRAIN(GPIOF_PIN5) |       \
                                     PIN_OTYPE_OPENDRAIN(GPIOF_PIN6) |       \
                                     PIN_OTYPE_OPENDRAIN(GPIOF_PIN7) |       \
                                     PIN_OTYPE_OPENDRAIN(GPIOF_PIN8) |       \
                                     PIN_OTYPE_OPENDRAIN(GPIOF_PIN9) |       \
                                     PIN_OTYPE_OPENDRAIN(GPIOF_PIN10) |      \
                                     PIN_OTYPE_OPENDRAIN(GPIOF_PIN11) |      \
                                     PIN_OTYPE_OPENDRAIN(GPIOF_PIN12) |      \
                                     PIN_OTYPE_OPENDRAIN(GPIOF_PIN13) |      \
                                     PIN_OTYPE_OPENDRAIN(GPIOF_PIN14) |      \
                                     PIN_OTYPE_OPENDRAIN(GPIOF_PIN15))
#define VAL_GPIOF_OSPEEDR           (PIN_OSPEED_HIGH(GPIOF_OSC_IN) |        \
                                     PIN_OSPEED_HIGH(GPIOF_OSC_OUT) |       \
                                     PIN_OSPEED_HIGH(GPIOF_PIN2) |          \
                                     PIN_OSPEED_HIGH(GPIOF_PIN3) |          \
                                     PIN_OSPEED_HIGH(GPIOF_PIN4) |          \
                                     PIN_OSPEED_HIGH(GPIOF_PIN5) |          \
                                     PIN_OSPEED_HIGH(GPIOF_PIN6) |          \
                                     PIN_OSPEED_HIGH(GPIOF_PIN7) |          \
                                     PIN_OSPEED_HIGH(GPIOF_PIN8) |          \
                                     PIN_OSPEED_HIGH(GPIOF_PIN9) |          \
                                     PIN_OSPEED_HIGH(GPIOF_PIN10) |         \
                                     PIN_OSPEED_HIGH(GPIOF_PIN11) |         \
                                     PIN_OSPEED_HIGH(GPIOF_PIN12) |         \
                                     PIN_OSPEED_HIGH(GPIOF_PIN13) |         \
                                     PIN_OSPEED_HIGH(GPIOF_PIN14) |         \
                                     PIN_OSPEED_HIGH(GPIOF_PIN15))
#define VAL_GPIOF_PUPDR             (PIN_PUPDR_FLOATING(GPIOF_OSC_IN) |     \
                                     PIN_PUPDR_FLOATING(GPIOF_OSC_OUT) |    \
                                     PIN_PUPDR_FLOATING(GPIOF_PIN2) |         \
                                     PIN_PUPDR_FLOATING(GPIOF_PIN3) |         \
                                     PIN_PUPDR_FLOATING(GPIOF_PIN4) |         \
                                     PIN_PUPDR_FLOATING(GPIOF_PIN5) |         \
                                     PIN_PUPDR_FLOATING(GPIOF_PIN6) |         \
                                     PIN_PUPDR_FLOATING(GPIOF_PIN7) |         \
                                     PIN_PUPDR_FLOATING(GPIOF_PIN8) |         \
                                     PIN_PUPDR_FLOATING(GPIOF_PIN9) |         \
                                     PIN_PUPDR_FLOATING(GPIOF_PIN10) |        \
                                     PIN_PUPDR_FLOATING(GPIOF_PIN11) |        \
                                     PIN_PUPDR_FLOATING(GPIOF_PIN12) |        \
                                     PIN_PUPDR_FLOATING(GPIOF_PIN13) |        \
                                     PIN_PUPDR_FLOATING(GPIOF_PIN14) |        \
                                     PIN_PUPDR_FLOATING(GPIOF_PIN15))
#define VAL_GPIOF_ODR               (PIN_ODR_HIGH(GPIOF_OSC_IN) |           \
                                     PIN_ODR_HIGH(GPIOF_OSC_OUT) |          \
                                     PIN_ODR_HIGH(GPIOF_PIN2) |             \
                                     PIN_ODR_HIGH(GPIOF_PIN3) |             \
                                     PIN_ODR_HIGH(GPIOF_PIN4) |             \
                                     PIN_ODR_HIGH(GPIOF_PIN5) |             \
                                     PIN_ODR_HIGH(GPIOF_PIN6) |             \
                                     PIN_ODR_HIGH(GPIOF_PIN7) |             \
                                     PIN_ODR_HIGH(GPIOF_PIN8) |             \
                                     PIN_ODR_HIGH(GPIOF_PIN9) |             \
                                     PIN_ODR_HIGH(GPIOF_PIN10) |            \
                                     PIN_ODR_HIGH(GPIOF_PIN11) |            \
                                     PIN_ODR_HIGH(GPIOF_PIN12) |            \
                                     PIN_ODR_HIGH(GPIOF_PIN13) |            \
                                     PIN_ODR_HIGH(GPIOF_PIN14) |            \
                                     PIN_ODR_HIGH(GPIOF_PIN15))
#define VAL_GPIOF_AFRL              (PIN_AFIO_AF(GPIOF_OSC_IN, 0U) |        \
                                     PIN_AFIO_AF(GPIOF_OSC_OUT, 0U) |       \
                                     PIN_AFIO_AF(GPIOF_PIN2, 0U) |          \
                                     PIN_AFIO_AF(GPIOF_PIN3, 0U) |          \
                                     PIN_AFIO_AF(GPIOF_PIN4, 0U) |          \
                                     PIN_AFIO_AF(GPIOF_PIN5, 0U) |          \
                                     PIN_AFIO_AF(GPIOF_PIN6, 0U) |          \
                                     PIN_AFIO_AF(GPIOF_PIN7, 0U))
#define VAL_GPIOF_AFRH              (PIN_AFIO_AF(GPIOF_PIN8, 0U) |          \
                                     PIN_AFIO_AF(GPIOF_PIN9, 0U) |          \
                                     PIN_AFIO_AF(GPIOF_PIN10, 0U) |         \
                                     PIN_AFIO_AF(GPIOF_PIN11, 0U) |         \
                                     PIN_AFIO_AF(GPIOF_PIN12, 0U) |         \
                                     PIN_AFIO_AF(GPIOF_PIN13, 0U) |         \
                                     PIN_AFIO_AF(GPIOF_PIN14, 0U) |         \
                                     PIN_AFIO_AF(GPIOF_PIN15, 0U))


#if !defined(_FROM_ASM_)
#ifdef __cplusplus
extern "C" {
#endif
  void boardInit(void);
#ifdef __cplusplus
}
#endif
#endif /* _FROM_ASM_ */

#endif /* BOARD_H */
