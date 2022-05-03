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
	int sum=0;
	float avg;
	for(int i=0;i<size;i++){
		sum+=arr[i];
	}
	avg=((float)sum/size);
	printf("\nAvg : %.2f",avg);
	return 0;
}

