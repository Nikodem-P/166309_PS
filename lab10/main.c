#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

size_t strlen(const char* s);
char* strcpy(char* t, const char* s);
char* strncpy(char* t, const char* s, size_t n);
char* strcat(char* t, const char* s);
bool strend(const char* s, const char *t);

int main()
{
    char* napis = "Test napisowy, napis testowy.";
    char nowyNapis[5] = "owy."; // = calloc(strlen(napis), sizeof(char));
    printf("%d\n", strend(napis, nowyNapis));
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

char* strcat(char* t, const char* s)
{
    char* p = t;
    strcpy(t + strlen(t), s);
    return p;
}

char* strncat(char* t, const char* s, size_t n)
{
    char* p = t;
    strncpy(t + strlen(t), s, n);
    return p;
}

bool strend(const char* s, const char *t)
{
    char* p = s + strlen(s) - strlen(t);
    while (*p != '\0')
    {
        if (*p == *t)
        {
            p++;
            t++;
            continue;
        }
        else
            return false;
    }
    return true;
}