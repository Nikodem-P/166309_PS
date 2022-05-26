#ifndef KOMPUTER_H
#define KOMPUTER_H
#define MAX_LEN 50

#include <stdbool.h>

/*
Zdefiniuj sta�� MAX_LEN r�wn� 50, a nast�pnie zdefiniuj C-struktur� Komputer o polach nazwa typu char[MAX_LEN-1], cena typu double, ileMaLat typu int oraz czyLaptop typu bool. Zdefiniuj nast�puj�ce funkcje:
*/
//const int MAX_LEN = 50;
typedef struct Komputer
{
    char nazwa[MAX_LEN-1];
    double cena;
    int ileMaLat;
    bool czyLaptop;
} Komputer;


// Tworzy struktur� Komputer
Komputer makeKomputer(const char *nazwa, double cena, int ileMaLat, bool czyLaptop);

// Tworzy kopi� komputera
Komputer makeKomputerCopy(const Komputer *komp);

// Postarza dany komputer o zadan� liczb� lat
void postarz(Komputer *komp, int lata);

// Wy�wietla dane komputera
void show(const Komputer *komp);

#endif
