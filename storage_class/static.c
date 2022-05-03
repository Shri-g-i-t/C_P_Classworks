/*
 * Name          : Shridhar Pujar
 * Date          :
 * Description   :
 * Sample input  :
 * Sample output :
*/

#include<stdio.h>
void fun(){
	static int a=10;
	//++a;

	printf("\n%d",a);
}
void main(){
	fun();
	fun();
	printf("\n\n%lu",sizeof(long long int));
}
