/*
 * Name          : Shridhar Pujar
 * Date          :
 * Description   :
 * Sample input  :
 * Sample output :
*/

#include<stdio.h>
int main(){
	int a[3]={1,2,3};
	int *p=a;
	int **r=&p;
	printf("%d",(**r));

	char *ptr[3]={"First","Second","Third"};
	printf("\n%u",*ptr[1]);
	return 0;
}
