/*
 * Name          : Shridhar Pujar
 * Date          :
 * Description   :
 * Sample input  :
 * Sample output :
*/

#include<stdio.h>
int main(){
	int n,a;
	printf("n=");
	scanf("%d",&n);
	a=n;
	for (int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(i==j || j==a){
				printf("%d",j);
			}
			else{
				printf(" ");
			}
		}
		--a;
		printf("\n");
	}
	return 0;
}
