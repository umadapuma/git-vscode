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
        printf("%d\n",len);
		if(len > 0){
			max = len;
			copy(longest,line);
            printf("%s\n", line);
		}
	}

	//if(max > 80){
	//	printf("%s\n", longest);
	//}
	return 0;
}

int ourgetline(char s[], int lim){
	int c,i;

	for(i=0; i < lim-1 && (c=getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;
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