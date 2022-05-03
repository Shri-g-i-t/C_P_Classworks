/*
 * Name          : Shridhar Pujar
 * Date          :
 * Description   :
 * Sample input  :
 * Sample output :
*/

#include<stdio.h>
#include<stdlib.h>
int sa(const void *a,const void *b){
	
	if( *((char *) a) > *((char *) b))
		return 1;
	if( *((char *) a) < *((char *) b))
		return -1;
	return 0;
}

int sd(const void *a,const void *b){
	return *(char *) a < *(char *) b;
}
int main(){
	char arr[5][10]={"Shri","Ram","Akash","Krish","Raj"};
	qsort(arr,5,10,sa);
	for(int i=0;i<5;i++){
		printf("%s ",arr[i]);
	}
	putchar('\n');
	qsort(arr,5,10,sd);
	for(int i=0;i<5;i++){
		printf("%s ",arr[i]);
	}
	return 0;
}


