/*
 * Name          : Shridhar Pujar
 * Date          :
 * Description   :
 * Sample input  :
 * Sample output :
*/

#include<stdio.h>
int main(){
	int arr[5]={1,2,3,4,5};
	int *iptr,i;
	iptr=arr;
	printf("\narr : %p",arr);
	printf("\niptr[1] :%p",&iptr[1]);
	printf("\n*iptr: %d",*iptr);

	for(i=0;i<5;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	for(i=0;i<5;i++){
		printf("%d ",iptr[i]);
	}
	printf("\n");
	for(i=0;i<5;i++){
		printf("%d ",*(arr+i));
	}
	printf("pointer\n");
	for(i=0;i<5;i++){
		printf("%d ",*(iptr+i));
	}
	printf("\n");
	for(i=0;i<5;i++){
		printf("%d ",*iptr++);
	}
	iptr=arr;
	printf("\n");
	for(i=0;i<5;i++){
		printf("%d ",i[arr]);
	}
	printf("\n");
	for(i=0;i<5;i++){
		printf("\n%d ", *(iptr+i));
	}
	printf("\n\n\n");
	for(i=0;i<5;i++)
	printf("%d ",i[iptr]);


	return 0;
}
