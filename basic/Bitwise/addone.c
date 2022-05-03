/*
 * Name          : Shridhar Pujar
 * Date          :
 * Description   :
 * Sample input  :
 * Sample output :
*/

#include<stdio.h>
int main(){
	unsigned char num1,num2;
	printf("num= ");
	scanf("%hhd",&num1);
	num2=-(~num1);
	printf("\nnum2=%d",num2);
	return 0;
}
