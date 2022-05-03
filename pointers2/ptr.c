/*
 * Name          : Shridhar Pujar
 * Date          :
 * Description   :
 * Sample input  :
 * Sample output :
*/

#include<stdio.h>
int main(){
	int *a;
	printf("\na(%%d) : %d",a);
	printf("\na(%%u) : %u",a);
	printf("\n&a : %u",&a);
	printf("\n*a : %d",*a);
	
	int *b=NULL;
	printf("\nb(%%d) : %d",b);
	printf("\nb(%%u) : %u",b);
	printf("\n&b : %u",&b);
	//Segmentation fault - accessing null ptr
	//printf("\n*b : %d",*b);


	void *vptr;
	printf("\nvptr(%%d) : %d",vptr);
	printf("\nvptr(%%u) : %u",vptr);
	//printf("\n&vptr : %u",&vptr);
	//Error - dereferncing void ptr
	//printf("\n*vptr : %d",*vptr);
}
