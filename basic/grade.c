#include<stdio.h>
int main()
{
	int p;
	printf("Enter percentage : ");
	scanf("%d",&p);
	if(p > 85)
		printf("\nA");
	else if(p > 70)
		printf("\nB");
	else if(p > 50)
		printf("\nC");
	else
		printf("Fail");
	return 0;
}
