#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a, b;
    char op;
    printf("Wprowadz liczbe a: ");
    scanf("%f", &a);
    printf("Wprowadz liczbe b: ");
    scanf("%f", &b);
    printf("Wprowadz operator: ");
    scanf("%s", &op);

    switch(op)
    {
    case '+':
        printf("Wynik: %f", a + b); break;
    case '-':
        printf("Wynik: %f", a - b); break;
    case '*':
        printf("Wynik: %f", a * b); break;
    case '/':
    {
        if (b != 0)
            printf("Wynik: %f", a / b);
        else
            printf("Blad dzielenia przez 0.");
        break;
    }
    default:
        printf("Nieznany operator.");
    }

}
