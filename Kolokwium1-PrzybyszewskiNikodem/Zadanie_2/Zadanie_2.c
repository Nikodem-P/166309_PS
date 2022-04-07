#include <stdio.h>
#include <stdlib.h>

double pow(int, int);

int main()
{
    int n, m;

    printf("n = ");
    scanf("%d", &n);
    printf("m = ");
    scanf("%d", &m);

    if ((n != 0) || (m != 0))
        printf("n^m = %lf", pow(n, m));
    else
        printf("Bledne dane.");

    return 0;
}

double pow(int n, int m)
{
    int temp_m;

    double result = 1;
    if (n == 0)
        return 0;

    if (m == 0)
        return 1;

    if (m < 0)
        temp_m = -1* m;
    else
        temp_m = m;

    {
        for (int i = 0; i < temp_m; i++)
            result *= n;
    }

    if (m > 0)
        return result;
    else
        return 1.0 / result;
}
