/*
 ============================================================================
 Name        : pb5.c
 Author      : Wagdy
 Version     :
 Copyright   : Your copyright notice
 Description :
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

	int arr_size,i,element;
	printf("Enter No. of elements: \n");
	flush();
	scanf("%d",&arr_size);
	int arr[arr_size];

	printf("Enter array elements: \n");
	flush();
	for(i=0;i<arr_size;i++)
	{
		printf("element_%d : ",i+1);
		flush();
		scanf("%d",&arr[i]);
	}
	printf("enter the element to be searched: \n");
	flush();
	scanf("%d",&element);

	for(i=0;i<arr_size;i++)
	{
		if(arr[i]==element){
			break;
		}
	}
	printf("Number found at the location = %d\n",i+1);
	return 0;

}
