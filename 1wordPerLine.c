#include <stdio.h>

#define IN 1 //inside a word
#define OUT 0 //outside a word

int main(int argc, char const *argv[])
{
    int c,nw,state;

    state=OUT;
    nw=0;

    while((c=getchar()) != EOF){

        if(c == ' ' || c == '\n' || c == '\t')
            state=OUT;
        else if (state == OUT)
            state=IN;

        if(state == IN)
            putchar(c);
        if( state == OUT)
            putchar('\n');
    }
    return 0;
}
