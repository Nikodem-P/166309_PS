#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int n, m, i;
    printf("Podaj liczbe calkowita n: ");
    scanf("%d", &n);
    printf("Podaj liczbe calkowita m: ");
    scanf("%d", &m);

    for (i = 1; i <= m; i++)
    {
        printf("\n%d * %d = %d", n, i, n * i);
    }
  
    return 0;
}
