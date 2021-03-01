#include <stdio.h>

int main(int argc, char const *argv[])
{
    int b=0,t=0,nl=0;
    int c;

    while((c = getchar()) != EOF){
        if(c == ' '){
            putchar(' ');
            while((c=getchar()) == ' ')
                ;
        }
        putchar(c);
            
    }

    return 0;
}
