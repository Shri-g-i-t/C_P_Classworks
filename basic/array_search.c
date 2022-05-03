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
	printf("Enter the element to search : ");
	int i,search,flag;
	scanf("%d",&search);
	for( i=0;i<size;i++){
		if(search==arr[i]){
			flag=1;
			break;
		}
	}
	if(flag==1){
	
	printf("\nfound %d at index %d",search,i);
	}
	else{
		printf("\nNot found");
	}
	return 0;
}

