#include <stdio.h>
int main()
{
    int x;

    x=0;
    while (x<1000)
    {
        printf("%d\n", x);
        x = x + 100;
    }
    return(0);
}
  