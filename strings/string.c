/*
 * Name          : Shridhar Pujar
 * Date          :
 * Description   :
 * Sample input  :
 * Sample output :
*/

#include<stdio.h>
#include<string.h>
unsigned int my_strlen(const char *str);
char *my_strcpy(char *dest,const char *src);
int my_strcmp(const char *str1,const char *str2);
char *my_strstr(const char *str,const char *substr); 
char *my_strchr(const char *s,int c);
char *my_strcat(char *dest,const char *src);
int is_palindrome(char *str);
int my_strcasecmp(const char *str1,const char *str2);
char *my_strrev(char *str);
int my_strcmpn(const char *str1,const char *str2,int n);

int main(){
	char str1[20],str2[20];
	printf("Enter string1 : ");
	//fgets(str1,s1,stdin);
	
	scanf("%19[^\n]",str1);
	printf("\nEnter string2 : ");
	//fgets(str2,s2,stdin);
    getchar();	
	scanf("%19[^\n]",str2);
	printf("\n\nString1 : %s",str1);
	printf("\nString2 : %s",str2);

#if 1

	int len1,len2;
	len1 = my_strlen(str1);
	printf("\n\nReturn value of lib func strlen : %ld",strlen(str1));
	printf("\nReturn value of my function strlen: %d",my_strlen(str1));
	len2 = my_strlen(str2);
	printf("\nlength of str2 : %d",len2);

   int my_cmp,cmp;
   my_cmp=my_strcmp(str1,str2);
   if(my_cmp)
   	   printf("\n\nnot Equal");
   else
   	   printf("\n\nequal");
   printf("\nReturn value of lib func strcmp : %d",strcmp(str1,str2));
 
   printf("\nReturn value of my func strcmp : %d",my_strcmp(str1,str2));
   printf("\nReturn value of lib func strcasecmp : %d",strcasecmp(str1,str2));
   printf("\nReturn value of my func strcasecmp : %d",my_strcasecmp(str1,str2));
 
#endif
#if 0
	my_strcpy(str1,str2);
	printf("\n\nstr1 : %s",str1);
	printf("\nstr2 ; %s",str2);
	printf("\nReturn address of lib func strcpy : %s",strcpy(str1,str2));
	printf("\nReturn address of my func strcpy : %s",my_strcpy(str1,str2));
#endif
#if 0
	if(is_palindrome(str1))
		printf("\npalindrome");
	else
		printf("\nnot palindrome");
#endif
#if 0
	//char str4[]="Hi hello how are you";
	//char str3[]="z";
	printf("\n\nReturn address of strstr lib func : %s",strstr(str1,str2));
	printf("\n\nReturn address of strstr my func : %s",my_strstr(str1,str2));

#endif

#if 0
	char ch;
	printf("Enter character to search : ");
	//getchar();
    scanf(" %c",&ch);
    //getchar();
	printf("\n\nReturn address of strchr lib func : %s",strchr(str1,ch));
	printf("\n\nReturn address of strchr my func : %s",my_strchr(str1,ch));
#endif

#if 0

	//printf("\n\nReturn address of strchr lib func : %s",strcat(str1,str2));
	printf("\n\nReturn address of strchr my func : %s",my_strcat(str1,str2));
	printf("\n\nstr1 : %s",str1);
	printf("\nstr2 ; %s",str2);
#endif

#if 0
	printf("\nString reverse : %s",my_strrev(str1));
#endif

#if 1
	//Compare upto n characters 
	int n;
	printf("\nEnter no of  characters to compare : ");
	scanf("%d",&n);
	printf("\nCompare n characters : %d",my_strcmpn(str1,str2,n)); 
#endif
	return 0;
}

unsigned int my_strlen(const char *str){
	int len=0;
	while(*str){
		++len;
		*str++;
	}
/*	while(*str=='\0'){
		++len;
		*str++;
	}
	*/
	return len;
}

char *my_strcpy(char *dest,const char *src){
//	printf("\nstr2 size : %d",sizeof(*str2));
	for(int i=0;i<=my_strlen(src);i++){
		dest[i]=src[i];
	}
	return dest;
}

int my_strcmp(const char *str1,const char *str2){
	int i;
	//compare all elements ,if any one not equal return perticular address
	for(i=0;i<=my_strlen(str1);i++){
		if(str1[i] != str2[i])
			return (str1[i] - str2[i]);
	}
	//if all elements are equal return 0
	return 0;
}
int my_strcmpn(const char *str1,const char *str2,int n){
	int i;
	//compare all elements ,if any one not equal return perticular address
	for(i=0;i<n;i++){
		if(str1[i] != str2[i])
			return (str1[i] - str2[i]);
	}
	//if all elements are equal return 0
	return 0;
}
int my_strcasecmp(const char *str1,const char *str2){
	int i;
	//compare all elements 
	for(i=0;i<my_strlen(str1);i++){
		if(str1[i] != str2[i] ){ //if not equal compare with ascii character  
			if((str1[i] - str2[i]) == 32 || (str1[i] - str2[i]) == -32){
				continue;
			}

			else
				return (str1[i] - str2[i]);
		}
	}
	return 0;
}

int is_palindrome(char *str){
	int i,len,j,count=0;
	len=strlen(str);
	//comapre the first and last elements of string
	for(i=0,j=len-1;i<len/2;i++){
		if(str[i] == str[j]) //if both are same increment count else break loop
			count++;
		else
			break;
		j--;
	}
	if(count == (len/2))
		return 1;
	return 0;
}
char *my_strrev(char *str){
	int i,j,temp;
	//swap the first and last elements of string
	for(i=0,j=my_strlen(str)-1;i<(my_strlen(str))/2;i++,j--){
        temp = str[i];
		str[i] = str[j]; //if both are same increment count else break loop
		str[j] = temp;
	}
	return str;
}

char *my_strstr(const char *str,const char *substr){
	int i,j,k=0,count=0;
	char *addr;

	for(i=0;i<strlen(str);i++){
		//compare first character of substring with all the elements of main string
		if(substr[0] == str[i]){
			//if found copy the index of main string and compare all the substring elements with main string
			//loop from 0 to length of substring
			for(j=i,k=0;k<strlen(substr);j++,k++){
				//comparing the substring elements from 0 index with the found index of main string and incrementing both 
				if(substr[k] == str[j]){ 
					count++; //if both characters are same increment count
					if(count == strlen(substr))
						return &str[i];
				}
				else{
					count=0;
					break;
				}
			}
		}
	}

	return 0;
}


char *my_strchr(const char *s,int c){
	for(int i=0;i<strlen(s);i++){
		if(c == s[i])
			return &s[i];
	}
	return 0;
}

char *my_strcat(char *dest,const char *src){
	//start i from last index of dest str to total length of both strings
	//start j from 0
	for(int i=strlen(dest),j=0;i<=(strlen(dest)+strlen(src));i++,j++){
		dest[i] = src[j];  //assign characters to dest str
	}
	return dest;
}

