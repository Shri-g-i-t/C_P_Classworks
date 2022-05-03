/*
 * Name          : Shridhar Pujar
 * Date          :
 * Description   :
 * Sample input  :
 * Sample output :
*/

#include<stdio.h>
int add(int a,int b){
	return a + b;
}

int sub(int a,int b){
	return a - b;
}

int oper(int (*f)(int,int),int a,int b){
	return f(a,b);
}

int main(){
	printf("\nadd : %p",add);
	printf("\n&add : %p",&add);
	printf("\nsub : %p",sub);
	printf("\nmain: %p",main);

	//int *fptr1=add;
	//printf("\nadd : %p",add);
	//printf("\nfptr: %p",fptr1);
	//printf("\n&fptr: %p",&fptr1);

	int (*fptr)(int,int);
	fptr = add;
	printf("\nadd : %p",add);
	printf("\nfptr: %p",fptr);
	printf("\n&fptr: %p",&fptr);


	printf("\n%d + %d = %d",2,5,fptr(2,5));

	fptr = sub;
	printf("\n%d - %d = %d",5,2,(*fptr)(5,2));

	printf("\n%d",oper(fptr,5,2));

	int a=7,b=5;
	int (*ptrarr[])(int,int)={add,sub};
	printf("\n+ %d",ptrarr[0](a,b));
	printf("\n+ %d",ptrarr[1](a,b));
	
	printf("\n+ %d",oper(ptrarr[0],a,b));
	printf("\n+ %d",oper(ptrarr[1],a,b));
}
