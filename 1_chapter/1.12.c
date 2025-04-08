#include <stdio.h>

int main(){
    int c;
    printf("Insert text, press enter when finish\n");
    while ( (c=getchar()) != EOF ){

        if (c == ' ' || c == '\n' || c == '\t'){
            putchar('\n');
            while ( (c=getchar()) != EOF ){
                if ( c == ' ' || c == '\n' || c == '\t'){
                    continue;
                }
                putchar(c);
                break;
            }
        }
        else{
            putchar(c);
        }
    }
    return 0;
}
