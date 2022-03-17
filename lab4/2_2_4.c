// 2.2.4
#include <stdio.h>
#include <stdlib.h>

int podzbiory(int);

int main()
{
    int n;
    printf("Wprowadz liczbe calkowita nieujemna: ");
    scanf("%d",&n);
    if (n >= 0)
        printf("%d", podzbiory(n));
    else
        printf("Zla liczba");

    return 0;
}

int podzbiory(int n)
{
    int i;
    int wynik = 1;
    for (i = 0; i < n; i++)
        wynik *= 2;

    return wynik;
}
