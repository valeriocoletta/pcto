#include <stdio.h>
int main()
{
    int america;
    int eta;
    printf("inserisci a che eta puoi prendere la patente");
    scanf("%d", &america);
    printf("inserisci la tua eta\n");
    scanf("%d", &eta);
    if( eta >= 16 )
    {
        printf("puoi prendere la patente");
    }
    else
    {
        printf("non puoi prendere la patente");
    }
    return(0);
}