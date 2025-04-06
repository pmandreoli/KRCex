#include <stdio.h>

int main(){
	int c;
	printf("Insert text, press enter when finish\n");
	while ( (c=getchar()) != EOF ){
		if (c == ' '){
		putchar(c);
		while ( (c=getchar()) == ' ')
		       ;	
		}
	putchar(c);
	}
	return 0;
}
