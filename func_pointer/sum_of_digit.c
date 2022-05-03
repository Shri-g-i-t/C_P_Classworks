/*
 * Name          : Shridhar Pujar
 * Date          :
 * Description   :
 * Sample input  :
 * Sample output :
*/

#include<stdio.h>
int sum_dig(int );
int main(){
	int res,num;
	printf("Enter the num : ");
	scanf("%d",&num);
    res=sum_dig(num);
    printf("\nSum of %d is %d",num,res);
    return 0;
}

int sum_dig(int num){
	static int sum=0;
	if(num > 0){

		return (num%10 + sum_dig(num/10));
	}
	else{
		return 0;
	}
}

