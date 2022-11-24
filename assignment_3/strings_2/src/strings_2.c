/*
 ============================================================================
 Name        : strings_2.c
 Author      : Wagdy
 Version     :
 Copyright   : Your copyright notice
 Description : length of string
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define string_size 100
void flush(void)
{
	fflush(stdin);
	fflush(stdout);
}
int main(void) {

	char input_string[string_size];
	short length=0,i=0;
	printf("Enter a String : ");
	flush();
	gets(input_string);
	while(input_string[i]!= '\0')
	{
		length++;
		i++;
	}

	printf("String length is %u",length);
	flush();
	return 0;

}
