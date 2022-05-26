#include <stdio.h>

//Napisz wskaŸnikow¹ wersjê funkcji strcpyEven. Funkcja ta ma kopiowaæ co drugi znak z napisu s do napisu t. Zadbaj o koniec napisu - NUL.
char* strcpyEven(char *t, const char *s);

int main(void) {
    char nap1[] = "123456789";
    char nap2[] = "AAAAAAAAAAAAAAAAAAAAA";
    printf("%s", strcpyEven(nap2, nap1));

    return 0;
}

char* strcpyEven(char *t, const char *s)
{
    char* temp = t;
    while(*s != '\0')
    {
        *t++ = *s++;
        s++;
    }
    *t = '\0';
    return temp;
}
