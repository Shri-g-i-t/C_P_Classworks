/*
 * Name          : Shridhar Pujar
 * Date          :
 * Description   :
 * Sample input  :
 * Sample output :
*/

#include<stdio.h>

int main(){
	short int n,m,rem;
	while(1){
		printf("Enter total number of patterns : ");
		scanf("%d",&n);
		if(n%2 == 0){
			continue;
		}
		printf("Enter number of pattern in middle : ");
		scanf("%d",&m);
		if(m%2 == 0){
			continue;
		}
		rem=n-m;
		for(int i=1;i<=(rem/2);i++){
			printf("$");
		}
		for(int i=1;i<=m;i++){
			printf("*");
		}
		for(int i=1;i<=(rem/2);i++){
			printf("$");
		}
		break;
	}
	printf("\n\n");

	for(int i=1;i<=n;i++){
		if(i <= (rem/2)){
			printf("$");
		}
		else if(i <= ((rem/2)+m)){
				printf("*");
				}
		else{
			printf("$");
		}
	}
	return 0;
}


