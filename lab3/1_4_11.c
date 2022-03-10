#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a, b, c, d, wynik;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);

    if (a < 0)
        a *= -1;

    // a
    wynik = 0;
    while ((a * wynik * wynik) + (b * wynik) + c <= d)
        wynik++;

    printf("Wynik a): %d", wynik);

    //b - NIE DZIAŁA
    wynik = 0;
    while ((5 * wynik * wynik) + (a * wynik) + b < c)
        wynik++;

    printf("\nWynik b): %d", wynik-1);

    //c - NIE DZIAŁA
    wynik = 0;
    while ((5 * wynik * wynik) + (a * wynik) + b <= c)
        wynik++;

    printf("\nWynik b): %d", wynik);

    return 0;
}

