#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 1000

int main()
{
    srand(time(NULL));

    int n;
    printf("Wprowadz liczbe calkowita n przedzialu [1; 100]: ");
    scanf("%d", &n);

    if ((n >= 1) && (n <= N))
    {
        int tab[n];

        for (int* p = tab; p < tab + n; p++)
            *p = (rand() % (10)) + 1;

        for (int* p = tab; p < tab + n; p++)
            printf("%d\n", *p);

        int maks = *tab, ilosc = 0;
        for (int* p = tab; p <= tab + n; p++)
            {
                if (*p > maks)
                {
                    maks = *p;
                    ilosc = 1;
                }
                else if (*p == maks)
                    ilosc++;
            }

        printf("=============\n");

        printf("Element najwiekszy: %d\n", maks);
        printf("Ilosc elementow najwiekszych: %d\n", ilosc);
    }
    else
        printf("Bledne dane.");

    return 0;
}
