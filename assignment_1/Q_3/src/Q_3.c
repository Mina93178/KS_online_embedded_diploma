/*
 ============================================================================
 Name        : Q_3.c
 Author      : Mina Wagdy
 Version     :
 Copyright   : Your copyright notice
 Description : Q_3
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void flush(void){
	fflush(stdin);
	fflush(stdout);
}
int main(void) {
	int User_Input_1=0,User_Input_2=0;
	printf("Enter 2 Integers:");
	flush();
	scanf("%d %d",&User_Input_1,&User_Input_2);
	printf("Sum:%d",User_Input_1+User_Input_2);

	return 0;
}
