/*
 * Name          : Shridhar Pujar
 * Date          :
 * Description   :
 * Sample input  :
 * Sample output :
*/

#include<stdio.h>

int main(){
	int num,temp_num,rev_num=0,rem;
	printf("Enter number : ");
	scanf("%d",&num);
	temp_num=num;
	while(num > 0){
		rem=num%10;
		rev_num=(rev_num * 10)+ rem;
		num=num/10;
	}
	if(temp_num == rev_num){
		printf("%d is PALINDROME",temp_num);
	}
	else{
		printf("%d is NOT PALINDROME",temp_num);
	}


}
