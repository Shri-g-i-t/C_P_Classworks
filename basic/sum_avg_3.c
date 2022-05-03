/*
 * Name          :
 * Date          :
 * Description   :
 * Sample input  :
 * Sample output :
*/

#include<stdio.h>

int main(){
	int n1=0,n2=0,n3=0,sum=0;
	float avg;
	printf("Enter 3 numbers : ");
	scanf("%d%d%d",&n1,&n2,&n3);

	sum=n1+n2+n3;
	printf("sum=%d\n",sum);
	avg=sum/3;
	printf("avg=sum/3 = %f\n",avg);
	avg=sum/3.0;
	printf("avg=sum/3.0 = %f\n",avg);
}



