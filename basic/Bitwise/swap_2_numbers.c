/*
 * Name          : Shridhar Pujar
 * Date          :
 * Description   :
 * Sample input  :
 * Sample output :
*/

#include<stdio.h>

int main(){
	int a,b;
	printf("Enter two numbers : ");
	scanf("%d%d",&a,&b);
	printf("\nBefore swapping : a= %d , b=%d",a,b);
	a=a^b;
	b=a^b;
	a=a^b;
	printf("\nAfter swapping : a= %d , b=%d",a,b);

	return 0;
}
