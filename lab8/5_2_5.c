#include <stdio.h>
#include <stdlib.h>

void przepisz(char*, char*);
// void przepisz(wchar_t*, wchar_t*);


int main()
{
    char str1[] = "agata";
    char str2[10];

    przepisz(str1, str2);
    printf("%s", str2);

    return 0;
}

void przepisz(char* napis1, char* napis2)
{
    while (*napis1 != '\0')
    {
        *napis2 = *napis1;
        napis1++;
        napis2++;
    }
}

/* void przepisz(wchar_t* napis1, wchar_t* napis2)
{
    while (*napis1 != '\0')
    {
        *napis2 = *napis1;
        napis1++;
        napis2++;
    }
} */
