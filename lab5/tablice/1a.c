#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 1000

int main()
{
    srand(time(NULL));

    int n;
    printf("W prowadz liczbe calkowita n p przedzialu [1; 100]: ");
    scanf("%d", &n);
    if ((n >= 1) && (n <= N))
    {
        int tab[n];
        int i, temp;

        for (i = 0; i < n; i++)
            tab[i] = (rand() % (101));

        for (i = 0; i < n; i++)
            printf("%d\n", tab[i]);

        for (i = 0; i < n; i++)
        {
            if (tab[i] % 2 == 1)
                tab[i] = tab[i] * 3 + 1;
            else
            {
                temp = tab[i];
                tab[i] /= 2;
                while ((temp % tab[i] != 0) && (tab[i] % 2 == 0))
                    tab[i]--;
            }
        }

        printf("=============\n");

        for (i = 0; i < n; i++)
            printf("%d\n", tab[i]);
    }
    else
        printf("Bledne dane.");

    return 0;
}
