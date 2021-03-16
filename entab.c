#include <stdio.h>
#define COLUMNS 10

int main(int argc, char const *argv[])
{
    int c;
    while((c=getchar()) != EOF){
        if(c != '\t')
            putchar(c);
        else{
            for(int i=0; i<COLUMNS;i++)
                putchar(' ');
        }
        
    }
    return 0;
}
