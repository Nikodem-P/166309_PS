#include <stdio.h>
#include <stdlib.h>

void kopiujn(char*, char*, int);
void w_kopiujn(wchar_t*, wchar_t*, int);


int main()
{
    char str1[] = "konstantynopolitanczykowianeczka";
    char str2[20];

    kopiujn(str1, str2, 14);
    printf("%s", str2);

    return 0;
}

void kopiujn(char* nap1, char* nap2, int n)
{
    for (int i = 0; i < n; i++)
    {
        *(nap2 + i) = *(nap1 + i);
    }
    if (*(nap2 + n - 1) != '\0')
        *(nap2 + n) = '\0';
}

void w_kopiujn(wchar_t* nap1, wchar_t* nap2, int n)
{
    for (int i = 0; i < n; i++)
    {
        *(nap2 + i) = *(nap1 + i);
    }
    if (*(nap2 + n - 1) != '\0')
        *(nap2 + n) = '\0';
}
