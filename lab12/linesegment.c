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

void showSegment(const LineSegment* s)
{
    printf("A = (%d, %d)\n", s->a.x, s->a.y);
    printf("B = (%d, %d)\n", s->b.x, s->b.y);
}

double length(const LineSegment* s)
{
    return sqrt(pow((s->b.x - s->a.x), 2) + pow((s->b.y - s->a.y),2));
}

double slope(const  LineSegment* s)
{
    if ((s->b.x - s->a.x) == 0)
        return NAN;
    else
        return ((double)(s->b.y - s->a.y)/(double)(s->b.x - s->a.x));
}

bool parallel(const LineSegment* s1, const LineSegment* s2)
{
    if (isnan(slope(s1)) && isnan(slope(s2)))
        return true;
    if (slope(s1) == slope(s2))
        return true;
    else
        return false;
}

bool perpendicular(const LineSegment* s1, const LineSegment* s2)
{
    if ((isnan(slope(s1)) && (slope(s2) == 0)) || ((slope(s1) == 0) && isnan(slope(s2))))
        return true;
    if (slope(s1) * slope(s2) == -1.0)
        return true;
    else
        return false;
}

void moveSegment(LineSegment* s, int deltaX, int deltaY)
{
    s->a.x += deltaX;
    s->b.x += deltaX;
    s->a.y += deltaY;
    s->b.y += deltaY;
}