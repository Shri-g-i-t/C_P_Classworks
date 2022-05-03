/*
 * Name          : Shridhar Pujar
 * Date          :
 * Description   :
 * Sample input  :
 * Sample output :
*/

#include<stdio.h>
int main(){
	unsigned char num,temp_num,left,right;
	printf("Enter number : ");
	scanf("%hhd",&num);
	temp_num=num;
	for(int i=0;i<8;i++){
		if(temp_num & (1<<7)){
			printf("1 ");
		}
		else{
			printf("0 ");
		}
		temp_num=temp_num<<1;
	}

	printf("\n");
	left=num<<4;
	right=num>>4;
	unsigned char res=left | right;
	for(int i=0;i<8;i++){
		if(res & (1<<7)){
			printf("1 ");
		}
		else{
			printf("0 ");
		}
		res=res<<1;
	}


}
