/*
 ============================================================================
 Name        : strings_3.c
 Author      : Wagdy
 Version     :
 Copyright   : Your copyright notice
 Description : reverse string
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define string_size 100
void flush(void)
{
	fflush(stdin);
	fflush(stdout);
}
int main(void) {

	char input_string[string_size];
	short length,i;
	printf("Enter a String : ");
	flush();
	gets(input_string);
	length= strlen(input_string);
	printf("Original String: ");
	flush();
	puts(input_string);
	printf("Reverse string: ");
	flush();
	for(i=length;i>=0;i--)
	{
		printf("%c",input_string[i]);
	}
	return 0;

}
