/*
 * Name          : Shridhar Pujar
 * Date          :
 * Description   :
 * Sample input  :
 * Sample output :
*/

#include<stdio.h>
int main(){
	char item1[15],item2[15],item3[15];
	int pc1,pc2,pc3;
	float c1,c2,c3;
	float f1,f2,f3,total;
	printf("Enter the item 1 : ");
	scanf("%[^\n]",item1);
	printf("Enter no of pcs : ");
	scanf("%d",&pc1);
	printf("Enter the cost : ");
	scanf("%f",&c1);
    getchar();
    f1 = c1 * pc1;
	printf("Enter the item 2 : ");
	scanf("%[^\n]",item2);
	printf("Enter no of pcs : ");
	scanf("%d",&pc2);
	printf("Enter the cost : ");
	scanf("%f",&c2);
	getchar();
	f2 = c2 * pc2;
	printf("Enter the item 3 : ");
	scanf("%[^\n]",item3);
	printf("Enter no of pcs : ");
	scanf("%d",&pc3);
	printf("Enter the cost : ");
	scanf("%f",&c3);
	f3 = c3 * pc3;

	printf("------------------------------------------------------\n");
	printf("%-5s %-15s %10s %10s %10s\n","S.No","Name","Quantity","Cost","Total");
	printf("------------------------------------------------------\n");
	printf("%-5s %-15s %10d %10.2f %10.2f\n","1.",item1,pc1,c1,f1);
	printf("%-5s %-15s %10d %10.2f %10.2f\n","2.",item2,pc2,c2,f2);
	printf("%-5s %-15s %10d %10.2f %10.2f\n","1.",item3,pc3,c3,f3);

	total = f1 + f2 + f3;
	int tot_q;
	tot_q = pc1+pc2+pc3;
	printf("------------------------------------------------------\n");
	printf("%-20s %10d %22.2f\n","Total",tot_q,total);
	printf("------------------------------------------------------\n");


	return 0;
}
