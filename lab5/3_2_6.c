#include <stdio.h>
#include <stdlib.h>

void przypiszDoAdresu(int, int*);

int main()
{
    int n, w;
    printf("w = %d\n", w);
    printf("Wprowadz liczbe calkowita n: ");
    scanf("%d", &n);
    przypiszDoAdresu(n, &w);
    printf("w = %d", w);
    return 0;
}

przypiszDoAdresu(int n, int* w)
{
    *w = n;
}
