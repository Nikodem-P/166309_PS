#include <stdio.h>
#include <stdlib.h>

void zamien(int*, int*);

int main()
{
    int a, b;
    printf("Wprowadz liczbe calkowita a: ");
    scanf("%d", &a);
    printf("Wprowadz liczbe calkowita b: ");
    scanf("%d", &b);
    zamien(&a, &b);
    printf("a = %d, b = %d", a, b);
    return 0;
}

zamien(int* p1, int* p2)
{
    int temp = *p1;
    if (*p2 < *p1)
        *p1 = *p2;
        *p2 = temp;
}
