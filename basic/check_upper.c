#include<stdio.h>
int main()
{
	char ch;
	printf("Enter a character : ");
	scanf("%c",&ch);
//	printf("%d\n",ch);
	if(ch >= 'A' && ch <= 'Z' ){
		printf("Uppercase letter\n");
	}
	else if(ch >= 97 && ch <= 122){
		printf("Lowercase letter\n");
	}
	else if(ch >= 48 && ch <= 57){
		printf("Digit\n");
	}
	else
		printf("Special character\n");
	 printf("%c %d %c %d",ch ,ch,'A','A');
}


