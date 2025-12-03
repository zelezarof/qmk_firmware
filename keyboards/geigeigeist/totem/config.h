#pragma once

#define MATRIX_ROWS 8
#define MATRIX_COLS 5

// https://docs.qmk.fm/drivers/serial#usart-full-duplex
#define SERIAL_USART_FULL_DUPLEX
#define SERIAL_USART_TX_PIN GP0
#define SERIAL_USART_RX_PIN GP1
#define SERIAL_USART_PIN_SWAP

// https://docs.qmk.fm/features/split_keyboard#handedness-by-eeprom
#define EE_HANDS

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 500U
