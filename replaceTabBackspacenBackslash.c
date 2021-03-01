#include <stdio.h>
//Kinda incomplete, got bored of doing it and felt I got enough out of it
int main(int argc, char const *argv[])
{
    int bs=0,t=0,nl=0;
    int c;

    while((c = getchar()) != EOF){
        if(c == '\\')
            putchar('\\');
        if(c == '\t'){
            putchar('\\');
            putchar('t');
        }
        if(c == '\n'){
            putchar('\\');
            putchar('n');
        }
                putchar(c);

    }

    return 0;
}
