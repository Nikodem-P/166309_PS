#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 1000

int main()
{
    srand(time(NULL));

    int n;
    printf("W prowadz liczbe calkowita n przedzialu [1; 100]: ");
    scanf("%d", &n);
    if ((n >= 1) && (n <= N))
    {
        int tab[n];

        for (int* p = tab; p < tab + n; p++)
            *p = (rand() % (100)) + 1;

        for (int* p = tab; p < tab + n; p++)
            printf("%d\n", *p);

        for (int* p = tab; p < tab + n; p++)
            {
                if (*p % 2 == 0)
                    *p *= 2;
                else
                    *p = -1 * *p;
            }

        for (int* p = tab; p < tab + n; p++)
            {
                if (*p > 0)
                    *p = 1;
                else
                    *p = -1;
            }

        printf("=============\n");

        for (int* p = tab; p < tab + n; p++)
            printf("%d\n", *p);
    }
    else
        printf("Bledne dane.");

    return 0;
}
