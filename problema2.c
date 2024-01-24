#include <stdio.h>
int main()
{
 int base;
 int altezza;
 int l1;
 int l2;
 printf(" misura della base\n");
 scanf("%d", &base);
 printf("misura dell'altezza\n");
 scanf("%d", &altezza);
 printf("misura del primo lato\n");
 scanf("%d", &l1);
 printf("misura del secondo lato\n");
 scanf("%d", &l2);
 printf("perimetro:""%d\n", (base + l1 + l2));
 printf(" area:""%d\n", (altezza * base / 2));



 


}