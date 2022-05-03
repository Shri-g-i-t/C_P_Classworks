/*
 * Name          : Shridhar Pujar
 * Date          :
 * Description   :
 * Sample input  :
 * Sample output :
*/

#include<stdio.h>
#include<unistd.h>
int main(){
	int i,j;
	for(i=1;i<=100;i++){
		printf("\rLoading %d%%",i);
		
		fflush(stdout);
		sleep(1);
	}
	return 0;
}
