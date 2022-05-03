/*
 * Name          : Shridhar Pujar
 * Date          :
 * Description   :
 * Sample input  :
 * Sample output :
*/

#include<stdio.h>
int fact(int num);
int main(){
	int num;
	printf("Enter num : ");
	scanf("%d",&num);
	printf("fact : %d",fact(num));
	return 0;
}

int fact(int num){
	if(num > 1)
		return num*(num-1);
	else
		return 1;
}
