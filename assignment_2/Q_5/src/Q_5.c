/*
 ============================================================================
 Name        : Q_5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description :Q_5
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void flush(void){
	fflush(stdin);
	fflush(stdout);
}
int main(void) {
	char User_Input=0;
	printf("Enter a character: ");
	flush();
	scanf("%c", &User_Input);
	if ((User_Input >= 'a' && User_Input <= 'z') || (User_Input >= 'A' && User_Input <= 'Z'))
		printf("%c is an alphabet.", User_Input);
	else
		printf("%c is not an alphabet.", User_Input);

	return 0;
}
