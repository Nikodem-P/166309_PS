#include <stdio.h>
#include <stdlib.h>

int porownaj(char*, char*);
int w_porownaj(wchar_t*, wchar_t*);

int main()
{
    char str1[] = "ania";
    char str2[] = "ania";
    printf("%d", porownaj(str1, str2));
    return 0;
}

int porownaj(char* napis1, char* napis2)
{
    while ((*napis1 != '\0') || (*napis2 != '\0'))
    {
        if (*napis1 == *napis2)
        {
            napis1++;
            napis2++;
            continue;
        }
        else
            return 0;
    }
    return 1;
}

int w_porownaj(wchar_t* napis1, wchar_t* napis2)
{
    while ((*napis1 != '\0') || (*napis2 != '\0'))
    {
        if (*napis1 == *napis2)
        {
            napis1++;
            napis2++;
            continue;
        }
        else
            return 0;
    }
    return 1;
}
