/*
 * Name          : Shridhar Pujar
 * Date          :
 * Description   :
 * Sample input  :
 * Sample output :
*/

#include<stdio.h>
void swap(int*,int*);
void swap1(int*,int*);
int *sum1(int*,int*);
int *product(int*,int*);
int main(){
	int a,b;
	printf("Enter two numbers : ");
	scanf("%d%d",&a,&b);
	printf("\nBefore swapping : a : %d  b : %d",a,b);
	swap(&a,&b);
	printf("\nAfter swapping  : a : %d  b : %d",a,b);
	swap1(&a,&b);
	printf("\nAfter swapping  : a : %d  b : %d",a,b);
	int *sum,*prod;
	sum=sum1(&a,&b);
	prod=product(&a,&b);
	printf("\nSum : %d",*sum);
	printf("\nProd : %d",*prod);
	return 0;
}

void swap(int *x,int *y){
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
	return;
}

int *sum1(int *a,int *b){
	static int total;
	total = *a + *b;
	return &total;
}
int *product(int *a,int *b){
	static int prod;
	prod=*a * *b;
	return &prod;
}

void swap1(int *m,int *n){
	*m = *m^*n;
	*n = *m^*n;
	*m = *m^*n;
}
