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
    lSegment.a
}