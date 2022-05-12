#ifndef LAB11_LINESEGMENT_H
#define LAB11_LINESEGMENT_H

#include "point.h"

typedef struct LineSegment
{
    Point a;
    Point b;
} LineSegment;

LineSegment makeLineSegment(int ax, int bx, int ay, int by);
LineSegment makeLineSegmentfromPoints(const Point* a, const Point* b);

#endif //LAB11_LINESEGMENT_H
