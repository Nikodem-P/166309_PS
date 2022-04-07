#include <stdio.h>
#include <stdlib.h>

int pierwsza_cyfra(int n);

int main()
{
    int n;

    printf("Wprowadz liczbe calkowita: ");
    scanf("%d", &n);

    printf("Pierwsza cyfra podanej liczby to: %d", pierwsza_cyfra(n));

    return 0;
}

int pierwsza_cyfra(int n)
{
    if (n < 0)
        n *= -1;

    while (n > 10)
        n /= 10;

    return n;
}
