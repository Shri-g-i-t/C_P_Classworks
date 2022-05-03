/*
 * Name          : Shridhar Pujar
 * Date          :
 * Description   :
 * Sample input  :
 * Sample output :
*/

#include<stdio.h>
int *array_create(int);
int print_array(int*,int);
int *modify(int*,int);

int main(){
	int *arr;
	static  int n;
	printf("Enter Elements : ");
	scanf("%d",&n);
	arr=array_create(n);
	print_array(arr,n);
	modify(arr,n);
	print_array(arr,n);
	return 0;
}

//int *array_create(int *arr,int n){
int *array_create(int n){
	static int array[5];
	printf("Enter no of elements : ");
	for(int i=0;i<n;i++){
		scanf("%d",&array[i]);
	}
	return array;
}

int print_array(int *arr,int n){
	printf("\nArray Elements : ");
	for(int i=0;i<n;i++){
		printf("%d  ",arr[i]);
	}
	//return 1;
}
int *modify(int *arr,int n){
	for(int i=0;i<n;i++){
		//*(arr+i)= *(arr+i)+10;
		arr[i] = arr[i] + 10;
	}
	return arr;
}

