/*
 * Name          : Shridhar Pujar
 * Date          :
 * Description   :
 * Sample input  :
 * Sample output :
*/

#include<stdio.h>
int main(){
short int i = 0;
    for(i<=5 && i>=-1; ++i; i>0)
        printf("%u,", i);
    printf("\n%zu",sizeof(short int));
    return 0;
}
