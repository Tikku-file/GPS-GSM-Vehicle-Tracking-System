#include "common.h"
void init(void)
{
	IE = 0x90;
	green = 0;
	red = 0;
  P1=0;
	uart_init();
	gsm_ready();
	delay();
  delay();
  delay();
  delay();
  delay();
  delay();
  delay();
	compare();
}