/*
 * Name          : Shridhar Pujar
 * Date          :
 * Description   :
 * Sample input  :
 * Sample output :
*/

#include<stdio.h>
int natural(int num);
int main(){
	int sum,num;
	printf("Enter num : ");
	scanf("%d",&num);
	sum=natural(num);
	printf("sum : %d",sum);
	return 0;
}

int natural(int num){
	
	if(num > 1){
		printf("%d  ",num);
		return num + natural(num-1);
	}
	else
		printf("%d ",num);
		return 1;
}
