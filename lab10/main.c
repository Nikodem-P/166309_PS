#include <stdio.h>
#include <stdlib.h>

size_t strlen(const char* s);
char* strcpy(char* t, const char* s);
char* strncpy(char* t, const char* s, size_t n);

int main()
{
    char* napis = "Test napisowy, napis testowy.";
    char* nowyNapis = calloc(strlen(napis) + 1, sizeof(char));
    strncpy(nowyNapis, napis, sizeof(char)*4);
    printf("%s\n", nowyNapis);
    free(nowyNapis);

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
    while (s <= s + n)
        *t++ = *s++;
    return p;
}
