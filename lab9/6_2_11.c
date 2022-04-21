#include <stdio.h>
#include <stdlib.h>
#define MSIZE 100

int sumaDwuwymiarowa(int[][MSIZE], int);

int main()
{
    srand(time(NULL));
    const int nSize = 3;
    int array[nSize][MSIZE];

    for(int i = 0; i < nSize; i++)
    {
        for(int j = 0; j < MSIZE; j++)
            array[i][j] = rand() % 11;
    }
    printf("%d", sumaDwuwymiarowa(array, nSize));
    return 0;
}

int sumaDwuwymiarowa(int arr[][MSIZE], int nSize)
{
    int suma = 0;
    for(int i = 0; i < nSize; i++)
    {
        for(int j = 0; j < MSIZE; j++)
            suma += arr[i][j];
    }

    return suma;
}
