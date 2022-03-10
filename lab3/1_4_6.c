#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    int wynik = 1;

    printf("Podaj liczbe calkowita n > 2: ");
    scanf("%d", &n);

    i = 1;
    if (n > 2)
    {
        while (i <= n)
        {
            if (i % 2 == 0)
                wynik *= i;
            i++;
        }

        printf("%d", wynik);
    }
    else
        printf("Zla liczba.");
    return 0;
}
