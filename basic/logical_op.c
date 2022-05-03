/*
 * Name          : Shridhar Pujar
 * Date          :
 * Description   :
 * Sample input  :
 * Sample output :
*/

#include<stdio.h>

int main(){
	int x=1,y=1,z=1;
	x++ || y++ && z++;
	{
		printf("x=%d y=%d z=%d\n",x,y,z);
	}

	x=1,y=1,z=1;
	int w=1,m=1;
	x++ || y++ && z++ || w++ || ++m;
	printf("\n\nx=%d y=%d z=%d w=%d\n",x,y,z,w);
	
	
	x=0,y=1,z=1,w=1;
	x++ && y++ && z++ || w++;
	printf("x=%d y=%d z=%d w=%d",x,y,z,w);

}
