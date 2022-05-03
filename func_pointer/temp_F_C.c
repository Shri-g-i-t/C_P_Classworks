/*
 * Name          : Shridhar Pujar
 * Date          :
 * Description   :
 * Sample input  :
 * Sample output :
*/

#include<stdio.h>
float fah_to_celsius(float);
int main(){
	float fah;
	printf("Enter temp in Fahrenheit : ");
	scanf("%f",&fah);
	printf("\nTemp in Celsius  : %.2f",fah_to_celsius(fah));
	return 0;
}

float fah_to_celsius(float f){
	return (((float)5/9)*(f-32));
}

