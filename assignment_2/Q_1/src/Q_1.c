/*
 ============================================================================
 Name        : Q_1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description :Q_1
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void flush(void){
	fflush(stdin);
	fflush(stdout);
}
int main(void) {
	int User_Input=0;
	printf("Enter an integer you want to check:");
	flush();
	scanf("%d",&User_Input);
	(User_Input%2==0)?printf("%d is even.",User_Input):printf("%d is odd.",User_Input);

	return 0;
}
