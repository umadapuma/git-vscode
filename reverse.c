#include <stdio.h>
#define MAXLINE 1000

int megetline(char line[], int maxline);
 void reverse(char string[],int length);

int main(){
    int len;
    char line[MAXLINE];
    
    while((len = megetline(line,MAXLINE)) >0){
        reverse(line,len);
                printf("%s\n", line);

    }
     

return 0;

}

    int megetline(char s[], int lim){
        int c,i;

        for(i=0; i<lim-1 && (c=getchar()) !=EOF && c !='\n'; ++i)
            s[i]=c;
        if(c == '\n'){
            s[i] = '\0';
            ++i;
        }
        return i;
    }

    void reverse(char a[], int len){
        int i;
        i=0;
        char temp[MAXLINE];

        while(a[i] != '\0'){
            temp[i] = a[len -(i+2)];
            ++i;
        }
        i++;
        temp[i] = '\0';
        a=temp;

        printf("%s\n",a);
    }