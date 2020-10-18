#include"headerfiles.h"

UINT8 main()
{
	uart_init();
	gsm_ready();
	while(1);
}

extern void gsm_ready(void)
{
send(strlen(commands[0]));
}

void send(UINT8 string_length)
{
	UINT8 i;
	for (i=0;i<string_length;i++)
	{
    buffer = commands[0][i];
	  uart_transmit();
	}
	buffer = ENTER;
	uart_transmit();
}
void uart_transmit(void)
{
	while(!transmit_interrupt_uart);
	transmit_interrupt_uart = 0;
}

void uart_init(void)
{
	uart_reg = 0x50;
	timer_reg = 0x20;
	timer_data_reg = -3;
	timer_on_off = 1;
}