/*
 * Name          : Shridhar Pujar
 * Date          :
 * Description   :
 * Sample input  :
 * Sample output :
*/

#include<stdio.h>
int main(){
	unsigned char num[]={5,4,1,4,3,5,8,1,2,3,2};
	unsigned char i,res=0;

    for(int j=0;j<sizeof(num);j++){
    	printf("%d ",num[j]);
	}
	for ( i=0;i<sizeof(num);i++){
		res=res ^ num[i];
	}
	printf("\nNon repeating number is : %d",res);
	return 0;
}
