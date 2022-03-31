#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 1000

int main()
{
    srand(time(NULL));

    int n, prawy, lewy;
    printf("Wprowadz liczbe calkowita n przedzialu [1; 100]: ");
    scanf("%d", &n);

    if ((n >= 1) && (n <= N))
    {
        int tab[n];

        for (int* p = tab; p < tab + n; p++)
            *p = (rand() % (100)) + 1;

        for (int* p = tab; p < tab + n; p++)
            printf("%d\n", *p);

        int par = 0, npar = 0;
        for (int* p = tab; p <= tab + n ; p++)
            {
                if (*p % 2 == 0)
                    par += 1;
                else
                    npar += 1;
            }

        printf("=============\n");

        printf("Ilosc elementow parzystych: %d\n", par);
        printf("Ilosc elementow nieparzystch: %d\n", npar);
    }
    else
        printf("Bledne dane.");

    return 0;
}
