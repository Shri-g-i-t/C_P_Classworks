/*
 * Name          :
 * Date          :
 * Description   :
 * Sample input  :
 * Sample output :
*/

#include<stdio.h>
int main()
{
printf("Enter percentage : ");
int n;
scanf("%d",&n);

if(n < 100)
{
	if(n < 90)
	{
		if(n < 80)
		{
			if(n < 70)
			{
				if(n < 60)
				{
					printf("FAIL\n");
				}
				else
				{
					printf("D grade\n");
				}
			}
			else
			{
				printf("C grade\n");
			}
		}
		else
		{
			printf("B grade\n");
		}
	}
	else
	{
		printf("A grade\n");
	}
}
else
{
	printf("Enter percentage less than 100 greater than 0\n");
}
}


