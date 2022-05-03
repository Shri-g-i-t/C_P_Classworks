/*
 * Name          : Shridhar Pujar
 * Date          :
 * Description   :
 * Sample input  :
 * Sample output :
*/

#include<stdio.h>
int main(){
	int n,res;
	printf("Enter n : ");
	scanf("%d",&n);
	res=1;
	for (int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			res=res*2;
		}
		printf("%d\t",res);
		res=1;
	}
	printf("\n");
	return 0;
}
