//2.2.7
#include <stdio.h>
#include <stdlib.h>

int pow(int, int);

int main()
{
    int n, m;
    printf("Wprowadz liczbe calkowita nieujemna n: ");
    scanf("%d",&n);
    printf("Wprowadz liczbe calkowita nieujemna m: ");
    scanf("%d",&m);
    if (n != 0 || m != 0)
        pow(n,m);
    else
        printf("Conajmniej jedna liczba musi byc rozna od 0.");

    printf("Wynik: %d", pow(n, m));

    return 0;
}

int pow(int n, int m)
{
    int i, wynik;
    if (n == 0)
        wynik = 0;
    else
        wynik = 1;
    for (i = 0; i < m; i++)
        wynik *= n;

    return wynik;
}
