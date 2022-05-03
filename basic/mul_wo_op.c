/*
 * Name          : Shridhar Pujar
 * Date          :
 * Description   :
 * Sample input  :
 * Sample output :
*/

#include<stdio.h>
int main(){
	int n1,n2,res=0;
	printf("Enter two numbers : ");
	scanf("%d%d",&n1,&n2);
	for(int i=1;i<=n2;i++){
		res=res+n1;
	}
	printf("%d * %d = %d\n",n1,n2,res);
}
