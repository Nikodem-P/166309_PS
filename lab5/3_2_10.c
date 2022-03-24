#include <stdio.h>
#include <stdlib.h>

double* rezerwujPamiec();

int main()
{
    printf("%p", rezerwujPamiec());
    return 0;
}

double* rezerwujPamiec()
{
    return malloc(sizeof(double));
}
