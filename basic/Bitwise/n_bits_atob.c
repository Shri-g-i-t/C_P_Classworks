/*
 * Name          : Shridhar Pujar
 * Date          :
 * Description   :
 * Sample input  :
 * Sample output :
*/

#include<stdio.h>

int main(){
	unsigned char n1,m1,m2,n2,num1,num2;
	int i;
	printf("Enter two numbers : ");
	scanf("%hhd%hhd",&num1,&num2);
    n1=m1=num1;
    n2=m2=num2;
	printf("\n%d  : ",num1);
	for(i=0;i<8;i++){
		if(n1 & (1<<7)){
			printf("1 ");
		}
		else{
			printf("0 ");
		}
		n1<<=1;
	}

	printf("\n%d  : ",num2);
	for(i=0;i<8;i++){
		if(n2 & (1<<7)){
			printf("1 ");
		}
		else{
			printf("0 ");
		}
		n2<<=1;
	}
	int count=0;
	printf("\n\n");
	for(i=0;i<8;i++){
		if((num1 & 01) != (num2 & 01)) {
			count++;
		}
		num1>>=1;
		num2>>=1;
	}
    printf("\nNo of bits to change : %d",count);


    int count1=0;
    unsigned char c,d;
    c=d=m1^m2;
    for(i=1;i<8;i++){
    	if( c & 01){
    		count1++;
		}
		c>>=1;
	}
	printf("\nNo of bits to change : %d",count1);
    
    int count2=0;
    while(d){
    	d & (d-1);
    	count2++;
		d= d & (d-1);
	}
	printf("\nNo of bits to change : %d",count2);
	return 0;
}
