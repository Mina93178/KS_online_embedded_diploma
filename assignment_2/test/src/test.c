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
 int i=0;
 if(i++ && (i==2)){printf("%d",i);}
 printf("%d",i);
	flush();
	return 0;
}
