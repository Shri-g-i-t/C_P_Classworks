/*
 * Name          : Shridhar Pujar
 * Date          :
 * Description   :
 * Sample input  :
 * Sample output :
*/

#include<stdio.h>
void array_scan(int*,int);
void array_print(int*,int);
int sum(int *,int);
float avg(int *,int);
void square(int *,int);

int main(){
	int n;
	printf("Enter no of elements : ");
	scanf("%d",&n);
	int array[n];
	printf("\nBase Address of array (&array) : %lld",array);
	array_scan(array,n);
	array_print(array,n);
	printf("Sum : %d",sum(array,n));
	printf("\nAvg : %f",avg(array,n));
	square(array,n);

	return 0;
}

void array_scan(int *ipa,int n){
	printf("\nIn array scan func");
	printf("\nParameters passed :\nipa : %lld\n*ipa :%d\n",ipa,*ipa);
	printf("\nEnter the elements of array : ");
	for(int i=0;i<n;i++){
		scanf("%d",&ipa[i]);
	}
	return;
}

void array_print(int *ipa,int n){
	printf("\n\nIn array print func");
	printf("\nParameters passed :\nipa : %lld\n*ipa :%d\n",ipa,*ipa);
	printf("\nArray Elements : ");
	for(int i=0;i<n;i++){
		printf("%d ",*(ipa+i));
	}
	return ;
}

int sum(int *ipa,int n){
	int sum=0;
	for(int i=0;i<n;i++){
		sum=sum+ipa[i];
	}
	return sum;
}

float avg(int *iptr,int n){
	int sum=0;
	float avg;
	for (int i=0;i<n;i++){
		sum=sum+*(iptr+i);
	}
	avg=(float)sum/n;
	return avg;
}

void square(int *iptr,int n){
	for(int i=0;i<n;i++){
		iptr[i]=iptr[i] * iptr[i];
	}
	array_print(iptr,n);
	return;
}


