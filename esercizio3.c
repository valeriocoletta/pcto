#include <stdio.h>
int main()
{   
    int l;
    int s;
    int v;
    int i;
    int e;
    printf("inserisci l'età di lucrezia\n");
    scanf("%d", &l);
    printf("inserisci l'età di sara\n");
    scanf("%d", &s);
    printf("inserisci l'età di valerio\n");
    scanf("%d", &v);
    printf("inserisci l'età di irene\n");
    scanf("%d", &i);
    printf("inserisci l'età di emma\n");
    scanf("%d", &e);
    printf("Risultato=%d\n ", (l + s + v + i + e) );
    }