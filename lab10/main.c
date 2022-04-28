#include <stdio.h>
#include <stdlib.h>

size_t strlen(const char* s);
char* strcpy(char* t, const char* s);
char* strncpy(char* t, const char* s, size_t n);

int main()
{
    char* napis = "Test napisowy, napis testowy.";
    char nowyNapis[4]; // = calloc(strlen(napis), sizeof(char));
    printf("%s\n", strncpy(nowyNapis, napis, 4));
//printf("%s\n", nowyNapis);
//free(nowyNapis);
    return 0;
}
size_t strlen(const char* s)
{
    size_t length = 0;
    while (*s++)
        length++;
    return length;
}

char* strcpy(char* t, const char* s)
{
    char* p = t;
    while ((*t++ = *s++));
    return p;
}

char* strncpy(char* t, const char* s, size_t n)
{
    char* p = t;
    while (*s != '\0' && n-- != 0)
        *t++ = *s++;
    return p;
}

