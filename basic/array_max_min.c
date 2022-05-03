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

	int max,min;
	for(int i=0;i<size;i++){
		if(i==0){
			max=arr[i];
			min=arr[i];
		}
		if(arr[i]<min){
			min=arr[i];
		}
		else if(arr[i]>max){
			max=arr[i];
		}
		/*else{
			min=arr[i];
			max=arr[i];
		}*/
	}
	printf("\nMaximum : %d\nMinimum : %d",max,min); 

	return 0;
}

