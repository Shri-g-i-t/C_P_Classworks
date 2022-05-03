/*
 * Name          : Shridhar Pujar
 * Date          :
 * Description   :
 * Sample input  :
 * Sample output :
*/

#include<stdio.h>
int addone(int*);
int main(){
	int num1;
	printf("Enter num1 : ");
	scanf("%d",&num1);
	printf("\nnum1 : %d",num1);
	printf("\nAddress of num1 : %lld",&num1);
	addone(&num1);
	printf("\nnum : %d",num1);
	return 0;
}

int addone(int *iptr){
	printf("\niptr=%lld",iptr);
	printf("\n*iptr=%d",*iptr);
	*iptr=*iptr+1;
	return 0;
}

