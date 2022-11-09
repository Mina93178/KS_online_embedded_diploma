/*
 ============================================================================
 Name        : Q_1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description :Q_3
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void flush(void){
	fflush(stdin);
	fflush(stdout);
}
int main(void) {
	float User_Input_1=0,User_Input_2=0,User_Input_3=0;
	printf("Enter three numbers: ");
	flush();
	scanf("%f%f%f",&User_Input_1,&User_Input_2,&User_Input_3);
	(User_Input_1>User_Input_2)?

			(User_Input_1>User_Input_3 ?
					printf("Largest number= %.3f",User_Input_1) : printf("Largest number= %.3f",User_Input_3) ) :

					(User_Input_2>User_Input_3? printf("Largest number= %.3f",User_Input_2):printf("Largest number= %.3f",User_Input_3));
	return 0;
}
