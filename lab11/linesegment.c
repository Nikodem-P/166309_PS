#include <stdio.h>
#include <math.h>
#include "point.h"
#include "linesegment.h"

LineSegment makeLineSegment(int ax, int bx, int ay, int by)
{
    LineSegment ab;
    ab.a.x = ax;
    ab.a.y = ay;
    ab.b.x = bx;
    ab.b.y = by;
    return ab;
}

LineSegment makeLineSegmentFromPoints(const Point* pa, const Point* pb)
{
    LineSegment ab;
    ab.a.x = pa->x;
    ab.a.y = pa->y;
    ab.b.x = pb->x;
    ab.b.y = pb->y;
    return ab;
}

void show(const LineSegment* s)
{
    printf("\nPoczatek: (%d, %d)\n", s->a.x, s->a.y);
    printf("Koniec: (%d, %d)\n", s->b.x, s->b.y);
}

double length(const LineSegment* s)
{
    return sqrt((s->b.x - s->a.x)^2 + (s->b.y - s->a.y)^2);
}