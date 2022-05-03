#include<stdio.h>
int main()
{
	int n1,n2,n3;
	printf("Enter 3 numbers : ");
	scanf("%d%d%d",&n1,&n2,&n3);

	if(n1 > n2 && n1 > n3){
		if(n2 > n3){
			printf("%d is Middle number.\n",n2);
		}
		else
			printf("%d is Middle number.\n",n3);
	}
	else if(n2 > n3 && n2 > n1){
		if(n1 > n3){
			printf("%d is Middle number.\n",n1);
		}
		else
			printf("%d is Middle number.\n",n3);
	}
	else
	{
		if(n1 > n2){
			printf("%d is Middle number.\n",n1);
		}
		else
			printf("%d is Middle number.\n",n2);
	}


	return 0;

}
