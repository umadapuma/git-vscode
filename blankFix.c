#include <stdio.h>

int main(int argc, char const *argv[])
{
    int b=0,t=0,nl=0;
    int c;
    int letter=0;

    while((c = getchar()) != EOF){
        if(c !=' ' || c != '\n'){
            letter++;
        }
        if(c == ' ' && letter>0){
            putchar(' ');
            while((c=getchar()) == ' ')
                ;
        }
        if(letter>0)
        putchar(c);
            
    }

    return 0;
}
