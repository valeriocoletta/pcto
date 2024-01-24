#include <stdio.h>
int main()
{
    char lettera;
    printf("inserisci un carattere\n");
    scanf("%c" , &lettera);
    if(lettera == 'a' || lettera == 'e' || lettera == 'i' || lettera == 'o' || lettera == 'u' || lettera == 'A' || lettera == 'E')
    {
        printf(" è una vocale");
    }
    else if(lettera>=33 && lettera<=64)
    {
        printf("errore");
    }
    else
    {
        printf("è una consonante");
    }
    return(0);
}