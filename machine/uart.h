// See LICENSE for license details.

#ifndef _RISCV_UART_H
#define _RISCV_UART_H

#include <stdint.h>

extern volatile uint32_t* uart;

#define UART_RX_FIFO		0
#define UART_TX_FIFO		1
#define UART_REG_STAT		2
#define UART_REG_CTRL		3

#define UART_MASK_TX_FULL   0x08
#define UART_MASK_RX_VALID  0x01

void uart_putchar(uint8_t ch);
int uart_getchar();
void query_uart(uintptr_t dtb);

#endif
