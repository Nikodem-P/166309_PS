#include <stdio.h>
#include <stdlib.h>

int main()
{
    int liczba1, liczba2, liczba3;
    printf("Wprowadz liczbe a: ");
    scanf("%d", &liczba1);
    printf("Wprowadz liczbe b: ");
    scanf("%d", &liczba2);
    printf("Wprowadz liczbe c: ");
    scanf("%d", &liczba3);

    if ((liczba1 > liczba2) && (liczba1 > liczba3))
        printf("Najwieksza: %d", liczba1);
    else if ((liczba2 > liczba1) && (liczba2 > liczba3))
        printf("Najwieksza: %d", liczba2);
    else if ((liczba1 == liczba2) && (liczba2 > liczba3))
        printf("Najwieksza: %d", liczba2);
    else
        printf("Najwieksza: %d", liczba3);

    return 0;
}
