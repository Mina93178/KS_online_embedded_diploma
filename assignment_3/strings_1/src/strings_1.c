/*
 ============================================================================
 Name        : pb5.c
 Author      : Wagdy
 Version     :
 Copyright   : Your copyright notice
 Description :
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define string_size 20
void flush(void)
{
	fflush(stdin);
	fflush(stdout);
}
int main(void) {
	short i,frequency=0;
	char x;
	char input_string[string_size];
	printf("Enter a string\n");
	flush();
	gets(input_string);
	printf("enter a character to find frequency: \n");
	flush();
	scanf("%c",&x);
	for(i=0;input_string[i]!='\0';i++){
		if (input_string[i]==x){frequency++;}
	}
	printf("frequency of %c = %u",x,frequency);
	flush();
	return 0;

}
