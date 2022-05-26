#include <stdio.h>
#include "komputer.h"
#include <string.h>

bool czyPrawidlowaCena (double cena);
bool czyPrawidlowyWiek (int ileMaLat);

int main(int argc, char *argv[])
{
    char nazwa[MAX_LEN-1];
    double cena;
    int ileMaLat, temp;
    bool czyLaptop;
    Komputer komp1, komp2, komp3, kompTab;

    // 1) Popro� u�ytkownika o wpisanie danych. Zabezpiecz dane! 1981 r. uznaje si� za pocz�tek ery komputer�w IBM PC - komputer�w osobistych. Zak�adamy, �e cena powinna by� z zakresu od 0 do 10000 z�. Napisz odpowiednie funkcje sprawdzaj�ce poprawno�� danych.
    printf("Wprowadz dane dotyczace komputera: \n");
    printf("Wprowadz nazwe: ");
    scanf("%s", &nazwa);
    printf("Wprowadz cene: ");
    scanf("%lf", &cena);
    if (!(czyPrawidlowaCena(cena)))
    {
        printf("Zle dane.");
        return 0;
    }
    printf("Wprowadz, ile ma lat: ");
    scanf("%d", &ileMaLat);
    if (!(czyPrawidlowyWiek(ileMaLat)))
    {
        printf("Zle dane.");
        return 0;
    }
    printf("Wprowadz 1 jezeli jest laptopem lub 0 jezeli nie: ");
    scanf("%d", &temp);
    czyLaptop = temp;
    // 2) Zainicjalizuj struktur� o nazwie komp1 wprowadzonymi danymi.
    komp1 = makeKomputer(nazwa, cena, ileMaLat, czyLaptop);
    // 3) Stw�rz struktur� o nazwie komp2 kopiuj�c obiekt komp1.
    komp2 = makeKomputerCopy(&komp1);
    // 4) Stw�rz struktur� o nazwie komp3 kopiuj�c obiekt komp1.
    komp3 = makeKomputerCopy(&komp1);
    // 5) Zmie� nazw� komputera komp1 na Dell
    strcpy(komp1.nazwa, "Dell");
    // 6) Zmie� nazw� komputera komp2 na Lenovo
    strcpy(komp1.nazwa, "Lenovo");
    // 7) Zmie� nazw� komputera komp3 na Asus
    strcpy(komp1.nazwa, "Asus");
    // 8) Zmie� wiek komputera komp2 na 22 lata
    komp2.ileMaLat = 22;
    // 9) Zmie� czyLaptop komputera komp3 na true
    komp3.czyLaptop = true;
    // 10) Postarz komputer komp1 o 3 lata
    postarz(&komp1, 3);
    // 11) Wypisz informacje o obiektach komp1, komp2, komp3
    show(&komp1);
    show(&komp2);
    show(&komp3);
    // 12) stw�rz tablic� o nazwie tab trzech komputer�w
    Komputer tab[3];
    // 13) W p�tli for do przechodzenia tablicy zamiast indeks�w nale�y u�y� wska�nik�w, a ka�dy operator indeksowania nale�y zastapi� operatorem dereferencji!!
    // Przejd� tablic� i wype�nij j� komputerami uzywaj�c odpowiedniej funkcji.
    for(int i = 0; i < 3; i++)
    {
        printf("Wprowadz dane dotyczace komputera: \n");
        printf("Wprowadz nazwe: ");
        scanf("%s", &nazwa);
        printf("Wprowadz cene: ");
        scanf("%lf", &cena);
        if (!(czyPrawidlowaCena(cena)))
        {
            printf("Zle dane.");
            return 0;
        }
        printf("Wprowadz, ile ma lat: ");
        scanf("%d", &ileMaLat);
        if (!(czyPrawidlowyWiek(ileMaLat)))
        {
            printf("Zle dane.");
            return 0;
        }
        printf("Wprowadz 1 jezeli jest laptopem lub 0 jezeli nie: ");
        scanf("%d", &temp);
        czyLaptop = temp;
        kompTab = makeKomputer(nazwa, cena, ileMaLat, czyLaptop);
        *(tab+i) = kompTab;
    }

    // 14) W p�tli for do przechodzenia tablicy zamiast indeks�w nale�y u�y� wska�nik�w, a ka�dy operator indeksowania nale�y zastapi� operatorem dereferencji!!
    // Wypisz informacje o wszystkich obiektach typu Komputer znajduj�cych sie w tablicy tab
    for(int i = 0; i < 3; i++)
        show(tab+i);

    return 0;
}

bool czyPrawidlowaCena (double cena)
{
    if ((cena < 0) || (cena > 10000))
        return false;
    else
        return true;
}

bool czyPrawidlowyWiek (int ileMaLat)
{
    if (((2022-ileMaLat)< 1981) || (ileMaLat < 0))
        return false;
    else
        return true;
}
