#include <stdio.h>
#include <stdlib.h>

double* rezerwujBlok(int);

int main()
{
    int n;
    printf("Podaj liczbe calkowita n: ");
    scanf("%d", &n);
    printf("%p", rezerwujBlok(n));
    return 0;
}

double* rezerwujBlok(int n)
{
    return malloc(sizeof(double) * n);
}
