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
	int User_Input=0, i=1,sum=0;
	printf("Enter An Integer: ");
	flush();
	scanf("%d", &User_Input);
	while(i<=User_Input){
		sum+=i;
		i++;
	}
	printf("Sum= %d",sum);
	return 0;
}
