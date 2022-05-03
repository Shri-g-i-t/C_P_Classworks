/*
 * Name          : Shridhar Pujar
 * Date          :
 * Description   :
 * Sample input  :
 * Sample output :
*/

#include<stdio.h>
int even_odd(int);
int main(){
	int num;
	printf("num=");
	scanf("%d",&num);
	if(even_odd(num))
		printf("\nEVEN");
	else
		printf("\nODD");
	return 0;
}

int even_odd(int x){
	if(x & 01)
		return 0;
	else
		return 1;
}
