#include <stdio.h>
int main()
{
    int anno;
    
    printf("inserisci l'anno in cui sei nato\n");
    scanf("%d", &anno);
    if(anno == 1969)
    {
        printf("sei nato lo stesso anno dello sbarco sulla luna");
    }
    else if(anno < 1969)
    {
        printf("sei nato (1969 - anno) anni prima dello sbarco sulla luna");
    }
    else if(anno > 1969)
    {
        printf("sei nato("anno - 1969")anni dopo lo sbarco sulla luna");
    }
    return(0);
    }