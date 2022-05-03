/*
 * Name          : Shridhar Pujar
 * Date          :
 * Description   :
 * Sample input  :
 * Sample output :
*/

#include<stdio.h>
int is_valid(int);
int is_palindrome(int);
int rev(int);
#if 0
int main(){
	int num;
	printf("Enter number : ");
	scanf("%d",&num);
	if(is_valid(num)){
		if(is_palindrome(num)){
			printf("%d is PALINDROME",num);
		}
		else{
			printf("%d is NOT PALINDROME",num);
		}
	}
	else{
		printf("%d is INVALID",num);
	}

	return 0;
}

int is_valid(int n){
	if(n > 0)
		return 1;
	else
		return 0;
}

int is_palindrome(int num){
	int rev_num;
	rev_num=rev(num);
    
	if(num == rev_num)
		return 1;
	else
		return 0;
}

int rev(int num){
	int rem,rev=0;
	while(num!=0){
	rem=num%10;
	rev=rev*10+rem;
	num=num/10;
	}
	return rev;
}
#endif

#if 1
int main(){
	int num;
	printf("Enter the number : ");
	scanf("%d",&num);
	is_valid(num) ? is_palindrome(num) ? printf("\nPALINDROME") : printf("NOT PALINDROME") : printf("INVALID");
	return 0;
}

is_valid(int n){
	return (n>0 && n<1000000);
}
is_palindrome(int num){
	return (num == rev(num));
}
rev(int num){
		int rev=0;
	while(num){
		rev=rev*10+(num%10);
		num=num/10;
	}
	return rev;
}
#endif


