#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    int wynik = 1;

    printf("Podaj liczbe calkowita n > 2: ");
    scanf("%d", &n);

    if (n > 2)
    {
        for (i = 1; i <= n; i++)
            wynik *= (2 * i);
        printf("%d", wynik);
    }
    else
        printf("Zla liczba.");
    return 0;
}
