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
                if (*p <= 0)
                    continue;
                if (*p % 2 == 1)
                    *p = 3 * *p + 1;
                else
                    do
                        *p /= 2;
                while(*p % 2 == 0);
            }

        printf("=============\n");

        for (int* p = tab; p < tab + n; p++)
            printf("%d\n", *p);
    }
    else
        printf("Bledne dane.");

    return 0;
}
