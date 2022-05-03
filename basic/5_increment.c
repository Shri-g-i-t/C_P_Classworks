/*
 * Name          : Shridhar Pujar
 * Date          :
 * Description   :
 * Sample input  :
 * Sample output :
*/

#include<stdio.h>

int main(){
	int k=4,i=4,j=6,b;
	//i++,j++;
    k=i++ + ++i - i;
    printf("k=%d\n",k);
    i=4;
    b=i+1-i;
    printf("b=%d\n",b);
	printf("%d %d\n",++i,j++);
	printf("%d %d",++i,j);

	int p=1;
	p++;printf("\np=%d\n",p);
	printf("\np=%d\n",p);
	return 0;
}
