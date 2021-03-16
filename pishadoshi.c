#include <stdio.h>
#define MAXLINE 1000

int ourgetline(char line[], int maxline);
void copy(char to[], char from[]);

int main(){
    int len, max;
	char line[MAXLINE];
	char longest[MAXLINE];

	max =0;
	while ((len = ourgetline(line,MAXLINE)) > 0){
		        
        if(len > max){
			max = len;
			copy(longest,line);
		}
	}

	if(max > 0){
		printf("%s\n", longest);
	}
	return 0;
}

int ourgetline(char s[], int lim){
	int c,i;

	for(i=0; i < lim-1 && (c=getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;
    if(c == ' '){
        putchar(' ');
        while(c=getchar() == ' ')
            ;
      //  putchar(c);
    }
    if(c == '\t'){
        while (c=getchar() == '\t')
        {
            ;
        }
   // putchar(c);        
    }


	if(c == '\n'){
		s[i] = '\0';
		++i;
	}
	return i;
}

void copy(char to[], char from[]){
	int i;

	i=0;
	while((to[i] = from[i]) != '\0')
		++i;
}