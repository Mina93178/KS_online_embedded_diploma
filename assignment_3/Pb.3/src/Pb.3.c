/*
 ============================================================================
 Name        : pb3.c
 Author      : Wagdy
 Version     :
 Copyright   : Your copyright notice
 Description :
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
void swap(float *xp, float *yp)
{
	float temp = *xp;
	*xp = *yp;
	*yp = temp;
}
int main(void) {

	int rows,cols,i,j;
	printf("Enter rows and columns of the matrix: \n");
	flush();
	scanf("%d\t%d",&rows,&cols);
	float arr[rows][cols];
	float arr_transpose[cols][rows];
	printf("enter elements of matrix: \n");
	flush();
	for(i=0;i<rows;i++){
		for (j=0;j<cols;j++)
		{
			printf("Enter Element a%d%d: ", i+1,j+1);
			flush();
			scanf("%f",&arr[i][j]);

		}
	}


	printf("Entered Matrix:\n");
	flush();
	for(i=0;i<rows;i++){
		for (j=0;j<cols;j++)
		{
			printf("%.0f\t",arr[i][j]);
			flush();

		}
		printf("\n");
		flush();
	}

 // swapping the matrix
	for(i=0;i<rows;i++){
		for (j=0;j<cols;j++)
		{
			arr_transpose[j][i]=arr[i][j];
		}
	}
	printf("Transpose of the matrix:\n");
	flush();


	for(i=0;i<cols;i++){
		for (j=0;j<rows;j++)
		{
			printf("%.0f\t",arr_transpose[i][j]);
			flush();

		}
		printf("\n");
		flush();
	}


	return 0;

}
