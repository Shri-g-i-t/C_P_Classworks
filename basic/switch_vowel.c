/*
 * Name          : Shridhar Pujar
 * Date          :
 * Description   :
 * Sample input  :
 * Sample output :
*/

#include<stdio.h>
int main(){
	char ch;
	printf("Enter alphabet : ");
	scanf("%c",&ch);
	switch (ch){
		case 65:
		case 69:
		case 73:
		case 79:
		case 85:
		case 97:
		case 101:
		case 105:
		case 111:
		case 117:
			printf("Entered alphabet %c is VOWEL",ch);
			break;
		default:
			printf("Entered alphabet %c is NOT VOWEL...its Consonant",ch);
	}
	return 0;
}


