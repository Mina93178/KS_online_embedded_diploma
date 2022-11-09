/*
 ============================================================================
 Name        : Q_5.c
 Author      : Mina Wagdy
 Version     :
 Copyright   : Your copyright notice
 Description : Q_5
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
	printf("Enter a Character:");
	flush();
	scanf("%c",&User_Input);
	printf("ASCII Value of %c = %d",User_Input,User_Input);
	return 0;
}
