/*
 * Name          : Shridhar Pujar
 * Date          :
 * Description   :
 * Sample input  :
 * Sample output :
*/

#include<stdio.h>
int main(){
	int n,res,pow;
	printf("Enter n : ");
	scanf("%d",&n);
	printf("Enter max power : ");
	scanf("%d",&pow);
	res=1;
	for (int i=1;i<=pow;i++){
		for(int j=1;j<=i;j++){
			res=res*n;
		}
		printf("%d\t",res);
		res=1;
	}
	printf("\n");
	return 0;
}
