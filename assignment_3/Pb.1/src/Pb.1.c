/*
 ============================================================================
 Name        : 1.c
 Author      : Wagdy
 Version     :
 Copyright   : Your copyright notice
 Description : 2-D Array
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void flush(void)
{
	fflush(stdin);
	fflush(stdout);
}
int main(void) {

	float arr_1[2][2] = {0} ,arr_2[2][2] = {0};
	int rows, cols;
	printf("Please enter the elements of the 1st matrix\n");
	flush();
	for (rows=0;rows<2;rows++)
	{
		for (cols=0;cols<2;cols++){
			printf("Enter a%d%d:  ",rows+1,cols+1);
			flush();
			scanf("%f",&arr_1[rows][cols]);
			flush();
		}

	}


	printf("Please enter the elements of the 2st matrix\n");
	flush();
	for (rows=0;rows<2;rows++)
	{
		for (cols=0;cols<2;cols++){
			printf("Enter b%d%d:  ",rows+1,cols+1);
			flush();
			scanf("%f",&arr_2[rows][cols]);
			flush();
		}

	}
	printf("sum of Matrix: \n");
	flush();
	for (rows=0;rows<2;rows++)
	{
		for (cols=0;cols<2;cols++){
			printf("%0.1f\t\t",(arr_1[rows][cols]+arr_2[rows][cols]));
			flush();
		}
		printf("\n");
		flush();
	}

	return 0;

}
