#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int sumaDwuwymiarowa(int nSize, int mSize, int arr[nSize][mSize]);

int main()
{
    srand(time(NULL));
    const int nSize = 3;
    const int mSize = 10;
    int array[nSize][mSize];

    for(int i = 0; i < nSize; i++)
    {
        for(int j = 0; j < mSize; j++)
            array[i][j] = rand() % 11;
    }
    printf("%d", sumaDwuwymiarowa(nSize, mSize, array));
    return 0;
}

int sumaDwuwymiarowa(int nSize, int mSize, int arr[nSize][mSize])
{
    int suma = 0;
    for(int i = 0; i < nSize; i++)
    {
        for(int j = 0; j < mSize; j++)
            suma += arr[i][j];
    }

    return suma;
}
