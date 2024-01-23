#include <stdio.h>
int main()
{
    int italia;
    int eta;
    printf("inserisci a che eta puoi prendere la patente");
    scanf("%d", &italia);
    printf("inserisci la tua eta\n");
    scanf("%d", &eta);
    if( eta >= 18 )
    {
        printf("puoi prendere la patente");
    }
    else
    {
        printf("non puoi prendere la patente");
    }
    return(0);
}