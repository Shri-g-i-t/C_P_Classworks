/*
 * Name          : Shridhar Pujar
 * Date          :
 * Description   :
 * Sample input  :
 * Sample output :
*/

#include<stdio.h>
int main(){
	int *null_1;
#if 0
	//printf("\n%d",*null);  //seg fault
	printf("\n%ls",null_1);  //o/p NULL
#endif
#if 0
	//accessing null pointer leads to segmentation fault
	null = (void *)0;
	printf("\n%d",*null);
#endif
#if 0
	//accessing the mem addr 0 leads to seg fault
	int num=1;
	scanf("%d",num);
#endif

	printf("size of void : %lu\n",sizeof(void));
	void *vptr1;
	printf("size of void pointer : %lu\n",sizeof(vptr1));
   //Dereferencing void pointer leads to comp err
	//printf("Value at vptr : %d",*vptr);
	
	double x=7.2;
	void *vptr;
	vptr=&x;
	printf("\n%lf",x);

	printf("\nhhx : %hhx",*(char *)vptr);
	printf("\nhhx : %hhx",*(char *)(vptr+7));
	printf("\nhhx : %hx",*(short *)(vptr+3));
	printf("\nhhx : %x",*(int *)(vptr+0));
	printf("\nhhx : %f",*(float *)vptr);
	

	return 0;
}
