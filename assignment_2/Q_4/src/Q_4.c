/*
 ============================================================================
 Name        : Q_1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description :Q_4
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void flush(void){
	fflush(stdin);
	fflush(stdout);
}
int main(void) {
	float User_Input_1=0;
	printf("Enter a number: ");
	flush();
	scanf("%f",&User_Input_1);
	(User_Input_1>0)? (printf("%f is Positive",User_Input_1)) :
			((User_Input_1<0) ?printf("%f is Negative",User_Input_1):printf("You entered Zero") );
	return 0;
}
