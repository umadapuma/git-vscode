#include <stdio.h>

#define IN 1 //inside a word
#define OUT 0 //outside a word

int main(int argc, char const *argv[])
{
    int c, nl,nw,nc,state;
    int digit=0;
    int ndigits[10];

    for(int i=0; i <10; i++)
        ndigits[i] = 0;

    state=OUT;
    nl=nw=nc=0;

    while((c=getchar()) != EOF){
        
        if(c == ' ' || c == '\n' || c == '\t'){
            state=OUT;
            ndigits[digit]++;
            digit=0;
        }

        else if (state == OUT){
            state=IN;
            ++nw;
        }
        else if(state == IN){
            digit++;
        }
    }

    for(int i =0; i<10; i++){
        printf("%d: ",i+1);
        for(int j =0;j<ndigits[i];j++ )
            printf("|");
    printf("\n");
    }
    return 0;
}
