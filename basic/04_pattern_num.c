/*
 * Name          : Shridhar Pujar
 * Date          :
 * Description   :
 * Sample input  :
 * Sample output :
*/

#include<stdio.h>

int main(){
	int b,n,a;
	printf("Enter n : ");
	scanf("%d",&n);
	for(int i=n;i>=1;i--){
		for(int j=1;j<=n;j++){
			if(j>i){
				printf("_");
			}
			else{
				printf("%d",j);
			}
		}

		for(int k=n;k>=1;k--){
			if(k>i){
				printf("_");
			}
			else
				printf("%d",k);
		}
		printf("\n");
	}
	return 0;
}


