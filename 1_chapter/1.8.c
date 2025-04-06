#include <stdio.h>

int main(){
	int c;
	int tabs = 0;
	int spaces = 0;
       	int newlines = 0;
	printf("Insert text, press Ctrl+d when finish\n");
	while ( (c=getchar()) != EOF ){
		if (c == '\n'){
			++newlines;
		}
		if (c == ' '){
			++spaces;
		}
		if (c == '\t'){
			++tabs;
		}
	}
		printf("N of newlines %i\nN of spaces %i\nN of tabs %i\n", newlines, spaces, tabs);
}
