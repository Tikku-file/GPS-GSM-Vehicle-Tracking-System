#define VARS

#include"common.h"
#include"global_data.h"
extern void init(void)
{
	interrupt_enable = 0x90;
	green = 0;
	red = 0;
  P1=0;
	uart_init();
	gsm_ready();
	compare();
	while(1);
}