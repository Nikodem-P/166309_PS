#ifndef LAB12_DIGITALCLOCK_H
#define LAB12_DIGITALCLOCK_H

typedef struct DigitalClock
{
    unsigned godzina;
    unsigned minuta;
} DigitalClock;

DigitalClock makeDigitalClock(unsigned godzina, unsigned minuta);
void increment(DigitalClock* s, unsigned ileMinut);
void incrementOneMinute(DigitalClock* s);
void decrement(DigitalClock* s, unsigned ileMinut);
void decrementOneMinute(DigitalClock* s);



#endif //LAB12_DIGITALCLOCK_H
