#include <stdio.h>
#include <stdlib.h>

int main()
{
    float liczba;
    printf("Podaj liczbe wymierna: ");
    scanf("%f", &liczba);
    if (liczba < 0)
        liczba *= -1;
    printf("Wartosc bezwzgledna liczby: %f", liczba);
    return 0;
}
