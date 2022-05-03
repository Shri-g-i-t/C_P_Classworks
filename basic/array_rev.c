/*
 * Name          : Shridhar Pujar
 * Date          :
 * Description   :
 * Sample input  :
 * Sample output :
*/

#include<stdio.h>
int main(){
	int size;
	printf("Enter the size of an array : ");
	scanf("%d",&size);
	int arr[size];
	printf("\nEnter the elements : ");
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	printf("\nArray Elements : ");
	for(int i=0;i<size;i++){
		printf("%d  ",arr[i]);
	}
	int temp,j=size-1;
	for(int i=0;i<size/2;i++){
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
			j--;

	}
	printf("\nArray Elements : ");
	for(int i=0;i<size;i++){
		printf("%d  ",arr[i]);
	}
	return 0;
}

