#include <stdio.h>
#include "linesegment.h"

LineSegment makeLineSegment(int ax, int bx, int ay, int by)
{
    LineSegment lSegment;
    lSegment.a.x = ax;
    lSegment.a.y = ay;
    lSegment.b.x = bx;
    lSegment.b.y = by;
    return lSegment;
}

LineSegment makeLineSegmentfromPoints(const Point* a, const Point* b)
{
    LineSegment lSegment;
    lSegment.a.x = a->x;
    lSegment.a.y = a->y;
    lSegment.b.x = b->x;
    lSegment.b.y = b->y;
    return lSegment;
}

void show(const LineSegment* s)
{
    printf("Poczatek: (%d, %d)", s->a.x, s->a.y);
    printf("Koniec: (%d, %d)", s->b.x, s->b.y);
}