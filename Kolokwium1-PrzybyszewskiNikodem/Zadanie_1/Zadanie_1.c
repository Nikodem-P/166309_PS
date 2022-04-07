#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, pos = 0, neg = 0, zero = 0;
    double temp;
    printf("Wprowadz liczbe naturalna: ");
    scanf("%d", &n);
    if (n > 0)
    {
        for (int i = 1; i <= n; i++)
        {
            printf("\nWprowadz liczbe rzeczywista (nr %d): ", i);
            scanf("%lf", &temp);
            if (temp > 0)
                pos++;
            else if (temp < 0)
                neg++;
            else
                zero++;
        }
    }
    else
    {
        printf("\nNie wprowadzono liczby naturalnej.");
    }
    printf("\nWprowadzono %d liczb dodatnich.\n", pos);
    printf("Wprowadzono %d liczb ujemnych.\n", neg);
    printf("Wprowadzono %d zer.\n", zero);

    return 0;
}
