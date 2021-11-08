/*
 *   Copyright (C) 2021 by BG5HHP
 *
 *   This program is free software; you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation; either version 2 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program; if not, write to the Free Software
 *   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#ifndef __MCU_DEFINES
#define __MCU_DEFINES

#ifdef __cplusplus
extern "C" {
#endif

#define CFG_SERIAL_RX_BUFFER_SIZE   512

// #define CFG_ENABLE_ADC_DMA 0

// #define CFG_ENABLE_RTC_CLKSRC_HSE
// #define CFG_ENABLE_RTC_CLKSRC_LSE
// #define CFG_ENABLE_RTC_CLKSRC_LSI

#define CFG_ENABLE_BACKTRACE 1
#define RTC_Set RTCx_Set

#define F_CPU                   SystemCoreClock
#define CYCLES_PER_MICROSECOND (F_CPU / 1000000U)

// #define __KEILDUINO__ 220
// #define __wfi __WFI
// #define __STM32__
// #define __STM32F4__

#ifdef __cplusplus
}
#endif

#endif
