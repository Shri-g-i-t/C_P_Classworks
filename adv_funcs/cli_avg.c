/*
 * Name          : Shridhar Pujar
 * Date          :
 * Description   :
 * Sample input  :
 * Sample output :
*/

#include<stdio.h>
int main(int argc,char *argv[]){
	printf("Number of arguments : %d",argc);
	int i=0,j,num,sum=0;
	float avg;
	while(argv[i] != NULL){
		printf("\n%d. %5s",i+1,argv[i]);
		i++;
	}

	printf("\n\n");
	for(i=1;argv[i] != NULL;i++){
		printf("Characters : ");
		for(j=0;argv[i][j] != '\0';j++){
			printf("%c ",argv[i][j]);
			num = num * 10 + (argv[i][j] - '0');
		}
		printf("Number : %d",num);
		sum = sum + num;
		num=0;
		printf("\n");
	}
	printf("Sum : %d",sum);
	printf("\nAvg : %g",(float)sum/(argc-1));

	return 0;
}
