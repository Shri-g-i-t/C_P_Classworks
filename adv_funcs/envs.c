/*
 * Name          : Shridhar Pujar
 * Date          :
 * Description   :
 * Sample input  :
 * Sample output :
*/

#include<stdio.h>
#include<stdlib.h>
int main(int argc,char **argv,char **envp){
	int i=0;
	char *ptr;
	setenv("b1","hello world",1);
	ptr=getenv("b1");
	if(ptr == NULL)
		printf("Not found\n");


	while(envp[i] != NULL){
		printf("%d. %s\n",i+1,envp[i++]);
	}
	return 0;
}
