/*
 ============================================================================
 Name        : Q_2.c
 Author      : Mina Wagdy
 Version     :
 Copyright   : Your copyright notice
 Description : Question 2
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void flush(void){
	fflush(stdin);
	fflush(stdout);
}
int main(void) {
	int User_Input =0;
	printf("Please, Enter An integer :");
	flush();
	scanf("%d",&User_Input);
	printf("You Entered: %d",User_Input);
	return 0;
}
