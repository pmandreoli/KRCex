#include <stdio.h>

int main(){
	int c, a;
	printf("Insert text, press enter when finish\n");
	while ( (c=getchar()) != EOF ){
		a = 0;
		if (c == '\t'){
			putchar('\\');
			putchar('t');
			a = 1;
		}
		if (c == '\b'){
			putchar('\\');
			putchar('b');
			a = 1;
		}
		if (c == '\\'){
			putchar('\\');
			putchar('\\');
			a = 1;
		}
		if (a == 0){
			putchar(c);
		}
	}
		return 0;
}
