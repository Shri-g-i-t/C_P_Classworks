/*
 * Name          : Shridhar Pujar
 * Date          :
 * Description   :
 * Sample input  :
 * Sample output :
*/

#include<stdio.h>
#include<stdarg.h>
void my_c_printf(char *fmt, ... );
void my_printf(char *fmt, ... );

int main(){
	my_printf("Hi my owm printf %d %c",2,'&');

	return 0;
}

void my_c_printf(char *fmt, ... ){
	while(*fmt){
		putchar(*fmt);
		fmt++;
	}
}

void my_printf(char *fmt, ... ){
	va_list ap;
	va_start (ap,fmt);
	int x;
	char c;
	while(*fmt){
		if(*fmt == '%'){
			fmt++;
			switch(*fmt){
				case 'd' : x = va_arg(ap,int);
						   fprintf(stdout,"%d",x);
						   break;
				case 'c' : c = va_arg(ap,int);
						   fprintf(stdout,"%c",c);
						   break;
			}
		}
		else
			putchar(*fmt);
		fmt++;
	}
	va_end(ap);
}

