/*
 * Name          : Shridhar Pujar
 * Date          :
 * Description   :
 * Sample input  :
 * Sample output :
*/

#include<stdio.h>
unsigned int square(int*,int*);
void cube1(int *,int*);
int main(){
	int num,sq,cube;
	printf("Enter the number : ");
	scanf("%d",&num);
	int *iptr;
	iptr=&num;
	sq= *iptr * *iptr;
	cube= *iptr * *iptr * *iptr;
	printf("\nsquare is %d\nCube : %d",sq,cube);

	int sq1,c1;
	square(&sq1,&num);
	cube1(&c1,&num);
	printf("\nsq=%d  cu=%d",sq1,c1);
	return 0;
}

unsigned int square(int *sptr,int *num){
	*sptr=*num * *num;
	return;
}

void cube1 (int *cptr,int *num){
	*cptr=*num * *num * *num;
	return;
}
