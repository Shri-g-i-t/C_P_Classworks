/*
 * Name          : Shridhar Pujar
 * Date          :
 * Description   :
 * Sample input  :
 * Sample output :
*/

#include<stdio.h>

int main(){
	int row,r,n,sp;
	printf("Number of lines : ");
	scanf("%d",&row);
	n=row*2-1;
	r=n;
	for(int i=1;i<=n;i++){
		if(i <= row){
			for(int sp=(row-i);sp>0;sp--){
				//printf("sp=%d ",sp);
				printf("  ");
			}
			for(int j=1;j<=(i*2-1);j++){

				printf("* ");
			}
			printf("\n");
		}
		else{
			for(int sp=1;sp<=(i-row);sp++){
				//printf("sp=%d ",sp);
				printf("  ");
			}
			for(int j=1;j<=r-2;j++){
				printf("* ");
			}
			printf("\n");
			r=r-2;
		}
	}
	return 0;
}
