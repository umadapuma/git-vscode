#include <stdio.h>

int main(int argc, char const *argv[])
{
    int b=0,t=0,nl=0;
    int c;

    while((c = getchar()) != EOF){
        if(c == ' ')
            ++b;
        if(c == '\t')
            ++t;
        if(c == '\n')
            ++nl;
    }
    printf("b: %d , t: %d, nl: %d\n",b,t,nl);

    return 0;
}
