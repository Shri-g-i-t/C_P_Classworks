/*
 * Name          : Shridhar Pujar
 * Date          :
 * Description   :
 * Sample input  :
 * Sample output :
*/

#include<stdio.h>
//auto int a;
//register int a=10;
int a;
int main()
{
	int a=10;
	{
		int a=20;
		printf("a in block : %d",a);
	}
	printf("\na in main fun : %d",a);
}
