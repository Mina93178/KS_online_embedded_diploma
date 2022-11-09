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

int main() {

	char operator;
	float firstNumber,secondNumber;
	double result;

	printf("Enter an operator + or - or * or / : ");
	flush();
	scanf("%c", &operator);

	printf("\nEnter two operands: ");
	flush();
	scanf("%f %f",&firstNumber, &secondNumber);


	switch(operator)
	{
	case '+':
		result = firstNumber + secondNumber;
		printf("\n%f + %f = %lf",firstNumber, secondNumber, result);
		flush();

		break;

	case '-':
		result = firstNumber - secondNumber;
		printf("\n%f - %f = %lf",firstNumber, secondNumber, result);
		flush();

		break;

	case '*':
		result = firstNumber * secondNumber;
		printf("\n%f * %f = %lf",firstNumber, secondNumber, result);
		flush();

		break;

	case '/':
		result = firstNumber / secondNumber;
		printf("\n%f / %f = %lf",firstNumber, secondNumber, result);
		flush();

		break;


	default:
		printf("Error! operator is not correct");
		flush();

	}

	return 0;
}
