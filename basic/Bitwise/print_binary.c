/*
 * Name          : Shridhar Pujar
 * Date          :
 * Description   :
 * Sample input  :
 * Sample output :
*/

#include<stdio.h>
int main(){
	unsigned char num;
	printf("Enter num : ");
	scanf("%hhd",&num);
	//printf("num+1=%d\n",num+1);  //wecan do arithmatic op on char datatypes too
	printf("Binary : (num & 0b10000000) : ");
	unsigned char t_num=num;
/*    for(;num!=0;num<<=1){
    	if(num & 0b10000000){
    		printf("1 ");
		}
		else{
			printf("0 ");           //not working
		}
	}
*/

    unsigned char num2=t_num;
    int bin=0,rem,place=1;
	while(num2){
		rem=num2%2;
		bin=bin+(rem*place);
		num2=num2/2;
		place=place*10;
	}
	printf("\nBinary : (num % 2)        :  %d",bin);

	printf("\nBinary : (num & (1<<7))   :");
	for ( int i=0;i<8;i++){
		if( t_num & (1<<7)){
			printf("1 ");
		}
		else{
			printf("0 ");
		}
		t_num<<=1;
	}
	return 0;
}
