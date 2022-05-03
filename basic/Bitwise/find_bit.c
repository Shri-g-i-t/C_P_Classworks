/*
 * Name          : Shridhar Pujar
 * Date          :
 * Description   :
 * Sample input  :
 * Sample output :
*/

#include<stdio.h>

int main(){
	unsigned char num,num2;
	int i;
	printf("Enter num : ");
	scanf("%hhd",&num);
	num2=num;
	printf("\n");
	for(i=0;i<8;i++){
		if(num & (1<<7)){
			printf("1 ");
		}
		else{
			printf("0 ");
		}
		num<<=1;
	}

	int index;
	printf("Enter index : ");
	scanf("%d",&index);
	if(num2 & (1<<index)){
		printf("%d bit is set",index);
	}
	else{
		printf("%d bit is unset",index);
	}

	return 0;
}
