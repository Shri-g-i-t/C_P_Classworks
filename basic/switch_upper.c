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
	char ch;
	printf("Enter a character : ");
	scanf("%c",&ch);
	switch(ch){
		case 65 ... 90:
			printf("Upper case Character\n");
			break;
		case 97 ... 122:
			printf("Lower Case character\n");
			break;
		case 48 ... 57:
			printf("Digit \n");
			break;
		default:
			printf("Special character\n");
	}
	return 0;
}


