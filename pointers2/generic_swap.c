/*
 * Name          : Shridhar Pujar
 * Date          :
 * Description   :
 * Sample input  :
 * Sample output :
*/

#include<stdio.h>
void generic_swap(void *,void *,size_t );

int main(){
	int n1,n2;
	printf("\nEnter 2 numbers : ");;
	scanf("%d%d",&n1,&n2);
	printf("\nBefore swapping : n1 %d  n2 %d",n1,n2);

	generic_swap(&n1,&n2,sizeof(int));

	printf("\nAfter swapping : n1 %d n2 %d",n1,n2);

	float f1,f2;
	printf("\nEnter 2 numbers : ");
	scanf("%f%f",&f1,&f2);
	printf("\nBefore swapping : n1 %g  n2 %g",f1,f2);

	generic_swap(&f1,&f2,sizeof(float));

	printf("\nAfter swapping : n1 %g n2 %g",f1,f2);

	return 0;
}

void generic_swap(void *v1,void *v2,size_t size){
	char temp;
	int i;
	for(i=0;i<size;i++){
		temp = *(char*)v1;
		*(char*)v1 = *(char*)v2;
		*(char*)v2 = temp;

		v1++;
		v2++;
	}
}

