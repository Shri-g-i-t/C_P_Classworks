/*
 * Name          : Shridhar Pujar
 * Date          :
 * Description   :
 * Sample input  :
 * Sample output :
*/

#include<stdio.h>
int main(){
	int a=10;
	int *ptr=&a;
	int **dptr=&ptr;
	int ***tptr=&dptr;

	printf("a : %d\n",a);
	printf("Address of a : %ld\n",&a);
	printf("*ptr = a\nptr : %ld\n",ptr);
	printf("Dereference : *ptr = %d\n",*ptr);
	printf("Address of ptr : %ld\n\n",&ptr);
	
	printf("**dptr = ptr\ndptr : %ld\n",dptr);
	printf("Dereference : *dptr = %ld\n",*dptr);
	printf("double Dereference : **dptr = %d\n",**dptr);
	printf("Address of dptr : %ld\n\n",&dptr);

	printf("***tptr = dptr\ntptr : %ld\n",tptr);
	printf("Dereference : *tptr = %ld\n",*tptr);
	printf("double Dereference : **tptr = %ld\n",**tptr);
	printf("thrible Dereference : ***tptr = %d\n",***tptr);
	printf("Address of tptr : %ld\n",&tptr);

	//printf("%d",*a);
}
