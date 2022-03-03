#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    float srednia;
    printf("Wprowadz liczbe a: ");
    scanf("%d", &a);
    printf("Wprowadz liczbe b: ");
    scanf("%d", &b);
    printf("Wprowadz liczbe c: ");
    scanf("%d", &c);

    srednia = (a + b + c)/3.0;
    printf("Srednia arytmetyczna: %f", srednia);
    return 0;
}
