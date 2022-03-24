#include <stdio.h>
#include <stdlib.h>

double* rezerwujPamiec();

int main()
{
    printf("%p", rezerwujPamiec());
}

double* rezerwujPamiec()
{
    return malloc(sizeof(double));
}
