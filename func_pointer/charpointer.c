/*
 * Name          : Shridhar Pujar
 * Date          :
 * Description   :
 * Sample input  :
 * Sample output :
*/

#include<stdio.h>
int main(){
	int num=0x12345677;
	int *iptr=&num;
	char *cptr=&num;
	printf("%x",*cptr);

	char *p="BRIGOSHA";
	printf("\n%c",*p+1);
}
