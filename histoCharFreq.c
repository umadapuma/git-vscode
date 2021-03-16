//I know its backwards but it works. Didnt say needed to be alpha order ;)
#include <stdio.h>

#define IN 1 //inside a word
#define OUT 0 //outside a word

int main(int argc, char const *argv[])
{
    int c, nl,nw,nc,state;
    int alpha=0;
    int nalpha[26];

    for(int i=0; i <26; i++)
        nalpha[i] = 0;

    state=OUT;
    nl=nw=nc=0;

    while((c=getchar()) != EOF){
        
        if(c == ' ' || c == '\n' || c == '\t'){
            state=OUT;
        }

        else if (state == OUT){
            state=IN;
            nalpha['z'-c]++;
            ++nw;
        }
        else if(state == IN){
            nalpha['z'-c]++;
        }
    }

    for(int i =0; i<26; i++){
        printf("%c: ",'z'-i);
        for(int j =0;j<nalpha[i];j++ )
            printf("|");
    printf("\n");
    }
    return 0;
}
