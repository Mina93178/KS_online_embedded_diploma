/*
 ============================================================================
 Name        : pb2.c
 Author      : Wagdy
 Version     :
 Copyright   : Your copyright notice
 Description : 2-D Array
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define arr_size 20
void flush(void)
{
	fflush(stdin);
	fflush(stdout);
}
int main(void) {

	int number_of_inputs, i;
	float input_array[arr_size],sum=0;

	printf("How many numbers do you have?\n");
	flush();
	scanf("%d",&number_of_inputs);
	for (i=0;i<number_of_inputs;i++)
	{
		printf("%d. Enter Number: ",i+1);
		flush();
		scanf("%f",&input_array[i]);
		sum+=input_array[i];
	}

	printf("Average = %.2f",(sum/(float)number_of_inputs));
	flush();
	return 0;

}
