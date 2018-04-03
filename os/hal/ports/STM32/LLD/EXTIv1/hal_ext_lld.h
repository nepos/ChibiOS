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

/**
 * @file    EXTIv1/hal_ext_lld.h
 * @brief   STM32 EXT subsystem low level driver header.
 *
 * @addtogroup EXT
 * @{
 */

#ifndef HAL_EXT_LLD_H
#define HAL_EXT_LLD_H

#if HAL_USE_EXT || defined(__DOXYGEN__)

#include "hal_ext_lld_isr.h"

/*===========================================================================*/
/* Driver constants.                                                         */
/*===========================================================================*/

/**
 * @brief   Available number of EXT channels.
 */
#define EXT_MAX_CHANNELS    STM32_EXTI_NUM_LINES

/**
 * @name    STM32-specific EXT channel modes
 * @{
 */
#define EXT_MODE_GPIO_MASK  0xF0        /**< @brief Port field mask.        */
#define EXT_MODE_GPIO_OFF   4           /**< @brief Port field offset.      */
#define EXT_MODE_GPIOA      0x00        /**< @brief GPIOA identifier.       */
#define EXT_MODE_GPIOB      0x10        /**< @brief GPIOB identifier.       */
#define EXT_MODE_GPIOC      0x20        /**< @brief GPIOC identifier.       */
#define EXT_MODE_GPIOD      0x30        /**< @brief GPIOD identifier.       */
#define EXT_MODE_GPIOE      0x40        /**< @brief GPIOE identifier.       */
#define EXT_MODE_GPIOF      0x50        /**< @brief GPIOF identifier.       */
#define EXT_MODE_GPIOG      0x60        /**< @brief GPIOG identifier.       */
#define EXT_MODE_GPIOH      0x70        /**< @brief GPIOH identifier.       */
#define EXT_MODE_GPIOI      0x80        /**< @brief GPIOI identifier.       */
/** @} */

/*===========================================================================*/
/* Driver pre-compile time settings.                                         */
/*===========================================================================*/

/*===========================================================================*/
/* Derived constants and error checks.                                       */
/*===========================================================================*/

/*===========================================================================*/
/* Driver data structures and types.                                         */
/*===========================================================================*/

/**
 * @brief   EXT channel identifier.
 */
typedef uint32_t expchannel_t;

/**
 * @brief   Type of an EXT generic notification callback.
 *
 * @param[in] extp      pointer to the @p EXPDriver object triggering the
 *                      callback
 * @paran[in] channel   channel on which the interrupt occured
 * @paran[in] arg       Pointer to user data
 */
typedef void (*extcallback_t)(EXTDriver *extp, expchannel_t channel, void* arg);

/**
 * @brief   Channel configuration structure.
 */
typedef struct {
  /**
   * @brief Channel mode.
   */
  uint32_t              mode;
  /**
   * @brief Channel callback.
   * @details  In the STM32 implementation a @p NULL callback pointer is
   *           valid and configures the channel as an event sources instead
   *           of an interrupt source.
   */
  extcallback_t         cb;
  void                  *arg;
} EXTChannelConfig;

/**
 * @brief   Driver configuration structure.
 * @note    It could be empty on some architectures.
 */
typedef struct {
  /**
   * @brief Channel configurations.
   */
  EXTChannelConfig      channels[EXT_MAX_CHANNELS];
  /* End of the mandatory fields.*/
} EXTConfig;

/**
 * @brief   Structure representing an EXT driver.
 */
struct EXTDriver {
  /**
   * @brief Driver state.
   */
  extstate_t                state;
  /**
   * @brief Current configuration data.
   */
  const EXTConfig           *config;
  /* End of the mandatory fields.*/
};

/*===========================================================================*/
/* Driver macros.                                                            */
/*===========================================================================*/

/*===========================================================================*/
/* External declarations.                                                    */
/*===========================================================================*/

#if !defined(__DOXYGEN__)
extern EXTDriver EXTD1;
#endif

#ifdef __cplusplus
extern "C" {
#endif
  void ext_lld_init(void);
  void ext_lld_start(EXTDriver *extp);
  void ext_lld_stop(EXTDriver *extp);
  void ext_lld_channel_enable(EXTDriver *extp, expchannel_t channel);
  void ext_lld_channel_disable(EXTDriver *extp, expchannel_t channel);
#ifdef __cplusplus
}
#endif

#endif /* HAL_USE_EXT */

#endif /* HAL_EXT_LLD_H */

/** @} */
