#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a, b, c, delta;
    printf("Wprowadz wspolczynnik a: ");
    scanf("%f", &a);
    printf("Wprowadz wspolczynnik b: ");
    scanf("%f", &b);
    printf("Wprowadz wspolczynnik c: ");
    scanf("%f", &c);

    delta = (pow(b,2)-4*a*c);

    if (delta < 0)
        printf("Brak rozwiazan rzeczywistych.");
    else if (delta == 0)
        printf("Rozwiazanie: %f", (-1 * b/(2 * a)));
    else
    {
        printf("Rozwiazanie 1: %f", ((-1 * b + sqrt(delta)) / (2 * a)));
        printf("\nRozwiazanie 2: %f", ((-1 * b - sqrt(delta)) / (2 * a)));
    }


    return 0;
}
