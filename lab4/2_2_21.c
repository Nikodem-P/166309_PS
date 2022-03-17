#include <stdio.h>
#include <stdlib.h>

int ntyWyrazCiagu(int n);

int main()
{
    int n;
    printf("Wprowadz liczbe calkowita n > 1: ");
    scanf("%d",&n);
     if (n > 1)
        printf("%d", ntyWyrazCiagu(n));
    else
        printf("Zla liczba");
}

int ntyWyrazCiagu(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return (ntyWyrazCiagu(n-1) + 2 * ntyWyrazCiagu(n-2) + 3);
}
