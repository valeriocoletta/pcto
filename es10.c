#include <stdio.h>
int main()
{
    int x;
    int y;
    int r;
    printf("inserisci x\n");
    scanf(" %d", &x);
    printf("inserisci y\n");
    scanf(" %d", &y);
    printf("inserisci r\n");
    scanf(" %d", &r);
    if (y-x==r-y)
    {
        printf (" è una progressione aritmetica\n");
    }
    else
    { 
        printf(" non è una progressione aritmetica\n");
    }
    return(0);
}