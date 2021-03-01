//program templet
//read a character
//while(character is not EOF indicator)
//  output character
//  read a character

#include <stdio.h>
// copy input to output; 1st version

/*
int main(int argc, char const *argv[])
{
    int c;
    c= getchar();
    while(c != EOF){
        putchar(c);
        c = getchar();
    }
    return 0;
}
*/

//copy input to output; 2nd version


 int main(int argc, char const *argv[])
 {
     int c;
     while((c=getchar()) != EOF){
         putchar(c);
     }
     return 0;
 }
 

//EXERCISES

/*
int main(int argc, char const *argv[])
{
    printf("%d\n",EOF);
    return 0;
}
*/