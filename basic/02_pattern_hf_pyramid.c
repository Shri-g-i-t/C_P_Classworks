/*
 * Name          : Shridhar Pujar
 * Date          :
 * Description   :
 * Sample input  :
 * Sample output :
*/

#include<stdio.h>

int main(){
	int row,col,sp;
	printf("Number of lines : ");
	scanf("%d",&row);
	for(int i=1;i<=row;i++){
		for(int sp=(row-i);sp>=0;sp--){
			printf("  ");
		}
		for(int j=1;j<=(i*2-1);j++){
			
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
