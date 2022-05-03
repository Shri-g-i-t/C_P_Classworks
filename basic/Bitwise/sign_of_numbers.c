/*
 * Name          : Shridhar Pujar
 * Date          :
 * Description   :
 * Sample input  :
 * Sample output :
*/

#include<stdio.h>

int main(){
	int n1,n2,num1,num2;
	printf("Enter 2 numbers : ");
	scanf("%d%d",&n1,&n2);

	if( n1 & (1<<31))
		printf("\n%d is negative number",n1);
	else
		printf("\n%d is positive number",n1);
	num1=n1;
	num2=n2;
	printf("\n%d  : ",num1);
	for(int i=0;i<32;i++){
		if(num1 & (1<<31)){
			printf("1 ");
		}
		else{
			printf("0 ");
		}
		num1<<=1;
	}

	printf("\n%d  : ",num2);
	for(int i=0;i<32;i++){
		if(num2 & (1<<31)){
			printf("1 ");
		}
		else{
			printf("0 ");
		}
		num2<<=1;
	}

	if( n2 & (1<<31))
		printf("\n%d is negative number",n2);
	else
		printf("\n%d is positive number",n2);

	int op;
	op= n1^n2;
	if(op & (1<<31))
		printf("\n%d %d have opposite signs",n1,n2);
	else
		printf("\n%d %d have same signs",n1,n2);
	return 0;
}
