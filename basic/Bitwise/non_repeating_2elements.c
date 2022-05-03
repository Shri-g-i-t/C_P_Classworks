/*
 * Name          : Shridhar Pujar
 * Date          :
 * Description   :
 * Sample input  :
 * Sample output :
*/

#include<stdio.h>
int main(){
	unsigned char num[]={10,5,4,1,4,3,5,3,1,2,2,8};
	unsigned char i,res=0,temp,nbit,a=0,b=0;

    for(int j=0;j<sizeof(num);j++){
    	printf("%d ",num[j]);
	}
	for ( i=0;i<sizeof(num);i++){
		res=res ^ num[i];
	}
	temp=res;
	for( i=0;i<8;i++){
		if(res & 01){
			nbit=i;
			break;
		}
		res = res >> 1;
	}
	printf("\nnth bit = %d",nbit);
	for(i=0;i<sizeof(num);i++){
		if(num[i] & (1<<nbit)){
			printf("\nnbit 1 : %d",num[i]);
			a= a^num[i];
		}
		else{
			printf("\nnbit 0 : %d",num[i]);
			b=b^num[i];
		}
	}

	
	printf("\nNon repeating numbers are : %d   %d",a,b);
	return 0;
}
