#include "digitalclock.h"

DigitalClock makeDigitalClock(unsigned godzina, unsigned minuta)
{
    while (godzina > 23)
        godzina -= 24;
    while (minuta > 59)
    {
        minuta -= 60;
        godzina++;
    }
    DigitalClock dc;
    dc.godzina = godzina;
    dc.minuta = minuta;
    return dc;
}

void increment(DigitalClock* s, unsigned ileMinut)
{
    unsigned h=0;
    while (ileMinut > 59)
    {
        ileMinut -= 60;
        h++;
    }
    s->godzina += h;
    s->minuta += ileMinut;
}

void incrementOneMinute(DigitalClock* s)
{
    s->minuta += 1;
}

void decrement(DigitalClock* s, unsigned ileMinut)
{
    unsigned h=0;
    while (ileMinut > 59)
    {
        ileMinut -= 60;
        h++;
    }
    s->godzina -= h;
    s->minuta -= ileMinut;
}

void decrementOneMinute(DigitalClock* s)
{
    s->minuta -= 1;
}