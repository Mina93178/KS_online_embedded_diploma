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
	int User_Input=0, i=1,fact=1;
	printf("Enter An Integer: ");
	flush();
	scanf("%d", &User_Input);
	if(User_Input<0) printf("Error!!! Factorial of Negative number does NOT exist!");
	else if (User_Input==0) printf("Factorial of zero = 1");
	else {
	while(i<=User_Input){
		fact*=i;
		i++;
	}
	printf("Sum= %d",fact);
	}
	return 0;
}
