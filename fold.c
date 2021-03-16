#include <stdio.h>
#define COLUMNS 10
#define MAXLINE 1000

int gline(char line[], int maxline);
void split(char to[], char from[]);

int main(int argc, char const *argv[])
{
    int c;
    int charCount=0;
    int len, max;
    max=0;
    char line[MAXLINE];
    char longest[MAXLINE];

    while((len = gline(line,MAXLINE)) > 0){

        printf("%d\n",len);
       // charCount++;

        // if(c != '\t')
        //     putchar(c);
        // else{
        //     for(int i=0; i<COLUMNS;i++)
        //         putchar(' ');
        // }
       // printf("%d\n",charCount);
    }
    return 0;
}

int gline(char s[], int lim){
    int c,i;

    for(i=0; i<lim-1 && (c=getchar()) != EOF && c!='\n'; i++)
        s[i] = c;
        if( c == '\n'){
            s[i] = '\0';
            i++;
        }
    return i;
}

void split(char to[], char from[]){

}