/*
 * Name          : Shridhar Pujar
 * Date          :
 * Description   :
 * Sample input  :
 * Sample output :
*/

#include<stdio.h>
int main(){
	int size,i,j,right,temp;
	printf("Enter array size : ");
	scanf("%d",&size);
	printf("Enter array elements : ");
	int arr[size];
	for(i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter no of right rotation : ");
	scanf("%d",&right);
	printf("Array before rotating : ");
	for(i=0;i<size;i++){
		printf("%d  ",arr[i]);
	}
    
	for(j=1;j<=right;j++){
		temp=arr[size-1];
		for(i=size-1;i>0;i--){
			arr[i]=arr[i-1];
		}
		arr[i]=temp;
	}

	printf("\nArray after right rotating : ");
	for(i=0;i<size;i++){
		printf("%d  ",arr[i]);
	}
	
	printf("Enter no of left rotation : ");
	int left;
	scanf("%d",&left);
	for(i=0;i<left;i++){
		temp=arr[0];
		for(j=0;j<size-1;j++){
			arr[j]=arr[j+1];
		}
		arr[size-1]=temp;
	}
	printf("\nArray after left rotating : ");
	for(i=0;i<size;i++){
		printf("%d  ",arr[i]);
	}

	return 0;
}



