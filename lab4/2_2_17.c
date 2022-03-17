#include <stdio.h>
#include <stdlib.h>

void wywolania();

int main()
{
    static int p;
    wywolania(p);
    wywolania(p);
    wywolania(p);
    wywolania(p);

    return 0;
}

void wywolania(int p)
{
    static unsigned int wyw = 0;
    wyw++;
    printf("Funkcja wywolada %d razy.\n", wyw);
}
