#include <stdio.h>
//count characters in input; 1st version

/*
int main(int argc, char const *argv[])
{
    long nc;

    nc=0;
    while(getchar() != EOF){
        ++nc;
    printf("%ld\n",nc);
    }
    return 0;
}
*/
//count characters in input; 2nd version

int main(int argc, char const *argv[])
{
    double nc;
    for(nc=0; getchar() != EOF; ++nc)
        ;
    printf("%.0f\n", nc);
    return 0;
}
