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
	int m,n1,n2;
	char op;
	printf("Enter the number1 operator and number2 : ");
	scanf("%d %c%d",&n1,&op,&n2);  //space before %c to 
	printf("n1=%d op=%c n2=%d\n",n1,op,n2);
	 scanf("%c");
	 m=getchar();
	 printf("%d\n",m);

	switch(op){
		case '+':
			printf("%d %c %d = %d",n1,op,n2,(n1+n2));
			break;
		case '-':
			printf("%d %c %d = %d",n1,op,n2,(n1-n2));
			break;
		case '*':
		case 'x':
			printf("%d %c %d = %d",n1,op,n2,(n1*n2));
			break;
		case '/':
			printf("%d %c %d = %d",n1,op,n2,(n1/n2));
			break;
		default:
			printf("Invalid Input!!!!\n");
	}
}
			

