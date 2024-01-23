#include <stdio.h>
int main()
{
    int anno;
    printf("inserisci un anno\n");
    scanf("%d", &anno);
    if (anno % 400 == 0)
    {
        printf("anno è bisestile");
    }
    else
    {
        printf("anno non è bisestile");
    }
    return(0);
}