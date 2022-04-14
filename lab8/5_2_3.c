#include <stdio.h>
#include <stdlib.h>

int porownaj(char*, char*);
int porownaj(wchar_t*, wchar_t*);

int main()
{
    char str1[] = "ania";
    char str2[] = "ani";
    printf("%d", porownaj(str1, str2));
    scanf("%d");
    return 0;
}

int porownaj(char* napis1, char* napis2)
{
    char* n1 = napis1;
    char* n2 = napis2;

    while ((*n1 != '\0') || (*n2 != '\0'))
    {
        if (*n1 = *n2)
        {
            n1++;
            n2++;
            continue;
        }
        else
            return 0;
    }
    return 1;
}

int porownaj(wchar_t* napis1, wchar_t* napis2)
{
    wchar_t* n1 = napis1;
    wchar_t* n2 = napis2;

    while ((*n1 != '\0') || (*n2 != '\0'))
    {
        if (*n1 = *n2)
        {
            n1++;
            n2++;
            continue;
        }
        else
            return 0;
    }
    return 1;
}

