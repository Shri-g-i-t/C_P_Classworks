/*
 * Name          : Shridhar Pujar
 * Date          :
 * Description   :
 * Sample input  :
 * Sample output :
*/

#include<stdio.h>
int main(){
	int size,size2;
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
	printf("Enter the size of an array : ");
	scanf("%d",&size2);
	int arr2[size2];
	printf("\nEnter the elements : ");
	for(int i=0;i<size2;i++){
		scanf("%d",&arr2[i]);
	}
	printf("\nArray Elements : ");
	for(int i=0;i<size2;i++){
		printf("%d  ",arr2[i]);
	}
	//Comparing
	int count=0;
	for(int i=0;i<size;i++){
		for(int j=0;j<size2;j++){
			if(arr[i]==arr2[j])
				count++;
		}
	}
	if(count==size){
		printf("\nBoth arrays are EQUAL");
	}
	else
		printf("\nBoth arrays are NOT EQUAL..only %d are same.",count);

	return 0;
}

