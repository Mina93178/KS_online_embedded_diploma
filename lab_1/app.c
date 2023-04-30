#include "uart.h"
unsigned char string_buffer[100] = "Learn-in-depth: Mina Wagdy";
unsigned char const string_buffer_2[100] = "rodata_enabled";

void main(void)
{
	
	Uart_Send_string(string_buffer);
	
}