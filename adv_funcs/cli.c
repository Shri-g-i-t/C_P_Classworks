/*
 * Name          : Shridhar Pujar
 * Date          :
 * Description   :
 * Sample input  :
 * Sample output :
*/

#include<stdio.h>
int main(int argc,char **argv){
	printf("argc : %d",argc);
	printf("\nargv : %u",argv);
	printf("\n*argv : %s",*argv);
	printf("\n**argv : %c",**argv);
	int i;
	for( i=0;i<argc;i++){
		printf("\n%d. argv : %10s  Address : %u",i,argv[i],&argv[i]);
	}
	printf("\n\nargv : %s",argv[i]);
	putchar('\n');

	return 0;
}

