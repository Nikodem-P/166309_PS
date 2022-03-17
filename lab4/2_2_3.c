// 2.2.3
#include <stdio.h>
#include <stdlib.h>

int najwiekszyDzielnik(int);

int main()
{
    int n;
    printf("Wprowadz liczbe calkowita n > 2: ");
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
    for (k = n-1; n % k != 0; k--);
        return k;
}
