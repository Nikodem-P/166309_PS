#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 1000

void collatz(int[], int);
void zmien(int[], int);
void signum(int[], int);
int ileNieparzystych(int[], int);
int ileParzystych(int[], int);


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
            *p = (rand() % (100)) + 1;

        for (int* p = tab; p < tab + n; p++)
            printf("%d\n", *p);

        printf("===collatz===\n");

        collatz(tab, n);

        for (int* p = tab; p < tab + n; p++)
            printf("%d\n", *p);

        printf("===zmien===\n");

        zmien(tab, n);

        for (int* p = tab; p < tab + n; p++)
            printf("%d\n", *p);

        printf("===signum===\n");

        signum(tab, n);

        for (int* p = tab; p < tab + n; p++)
            printf("%d\n", *p);
    }
    else
        printf("Bledne dane.");

    return 0;
}

void collatz(int tab[], int n)
{
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
}

void zmien(int tab[], int n)
{
    for (int* p = tab; p < tab + n; p++)
            {
                if (*p % 2 == 0)
                    *p *= 2;
                else
                    *p = -1 * *p;
            }
}

void signum(int tab[], int n)
{
    for (int* p = tab; p < tab + n; p++)
            {
                if (*p > 0)
                    *p = 1;
                else
                    *p = -1;
            }
}

void ileNieparzystych(int tab[], int n);
{
    int npar = 0;
    for (int* p = tab; p <= tab + n ; p++)
            {
                if (*p % 2 == 1)
                    npar += 1;
            }
    return npar;
}

void ileParzystych(int tab[], int n);
{
    int par = 0;
    for (int* p = tab; p <= tab + n ; p++)
            {
                if (*p % 2 == 0)
                    par += 1;
            }
    return par;
}
