/*
 * Name          : Shridhar Pujar
 * Date          :
 * Description   :
 * Sample input  :
 * Sample output :
*/

#include<stdio.h>
int main(){
	
	int age;
	char name[30],mbl_no[20];
	printf("Enter Full Name     : ");
	scanf("%29[^\n]",name);
	printf("\nEnter Age : ");
	scanf(" %d",&age);
	printf("\nEnter Mobile Number : ");
	scanf(" %19[^\n]",mbl_no);

	int len=0;
	char *ptr;
	ptr=mbl_no;
	while(*ptr++){
		len++;
	}
	printf("\nlen = %d",len);
	return 0;
}



