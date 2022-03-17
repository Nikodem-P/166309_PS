// 2.2.3
#include <stdio.h>
#include <stdlib.h>

int najwiekszyDzielnik(int);

int main()
{
    int n;
    printf("Wprowadz liczbe calkowita nieujemna: ");
    scanf("%d",&n);
    if (n <= 2)
    {
        printf("Zla liczba");
        return 0;
    }
    else
        printf("%d", najwiekszyDzielnik(n));
    return 0;
}

int najwiekszyDzielnik(int n)
{
    int k;
    int wynik = 1;
    if (n % 2)
    {
        for (k = 1; k <= ((n + 1) / 2); k++)
            if (n % k == 0)
                wynik = k;
    }
    else
    {
        for (k = 1; k <= (n / 2); k++)
            if (n % k == 0)
                wynik = k;
    }
    return wynik;
}
