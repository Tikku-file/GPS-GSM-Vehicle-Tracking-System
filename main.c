
#include"headerfiles.h"

void main()
{
	//lcd_init();
	IE = 0x90;
	green = 0;
	red = 0;
	//LCD=0x00;
P1=0;
	uart_init();
	gsm_ready();
	wait();
		wait();
		wait();
		wait();
		wait();
		wait();
		wait();
  	compare();
	while(1);
	//return 0;
}

extern void gsm_ready(void)
{
	char i=0;
	//for (i=0;i<3;i++)
  send(strlen(commands[i]));
}

void send(UINT8 string_length)
{
	UINT8 i;
//	for (j=0;j<3;j++)
//	{
	for (i=0;i<string_length;i++)
	{
    buffer = commands[0][i];
		//wait();
	  uart_transmit();
	}
	
	//wait();
	//receive_response();

//}
}
void uart_transmit(void)
{
	while(!transmit_interrupt_uart);
	transmit_interrupt_uart = 0;
}

void uart_init(void)
{
	uart_reg = 0x50;
	timer_reg = 0x21;
	timer_data_reg = -3;
	timer_on_off = 1;
}
/*
void send_message(char *str)
{
	INT8 i;
	for (i=0;i<strlen(str);i++)
	buffer = i;
	buffer=ENTER;
}
*/
void wait(void)
{
	UINT8 i;
	for (i=0;i<254;i++);
				for (i=0;i<254;i++);
		for (i=0;i<254;i++);
				for (i=0;i<254;i++);
		for (i=0;i<254;i++);
				for (i=0;i<254;i++);
		for (i=0;i<254;i++);
				for (i=0;i<254;i++);
		for (i=0;i<254;i++);
				for (i=0;i<254;i++);
		for (i=0;i<254;i++);
				for (i=0;i<254;i++);
		for (i=0;i<254;i++);
				for (i=0;i<254;i++);
		for (i=0;i<254;i++);
				for (i=0;i<254;i++);
}
void receive_response(void)  interrupt 4
{ 
/* ISR routine to save responses/new message */
	if(RI){
		EA = 0;
		response[x] = buffer;	/* copy SBUF(received value) to buffer */
		x++;
		RI = 0;
		EA = 1;
	}

	
}

void compare(void)
{
	P1 = x;
		//lcd_disp(x);
/*	OK_FLAG = FALSE;
	if (response[1]=='A')
	{
		OK_FLAG = TRUE;
	}
	else
	{
		OK_FLAG = FALSE;
	}
		if (OK_FLAG==TRUE)
		{
			green = TRUE;
		  red = FALSE;
		}
		else
		{
			red = TRUE;
			green = FALSE;
		}*/
}