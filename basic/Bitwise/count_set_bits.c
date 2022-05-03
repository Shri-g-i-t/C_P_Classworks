/*
 * Name          : Shridhar Pujar
 * Date          :
 * Description   :
 * Sample input  :
 * Sample output :
*/

#include<stdio.h>
int main(){
	unsigned int num,count=0;
    printf("Enter num : ");
    scanf("%d",&num);
    for (;num!=0;num>>=1){
    	if(num & 01){
    		count++;
    	}
    		printf("\nc=%d",count);
	}
	printf("\nSet bits are %d",count);
	return 0;
}
