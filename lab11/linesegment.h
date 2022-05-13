#ifndef LAB11_LINESEGMENT_H
#define LAB11_LINESEGMENT_H

#include "point.h"

typedef struct LineSegment
{
    Point a;
    Point b;
} LineSegment;

LineSegment makeLineSegment(int ax, int bx, int ay, int by);
LineSegment makeLineSegmentFromPoints(const Point* pa, const Point* pb);

void show(const LineSegment* s);
double length(const LineSegment* s);

#endif //LAB11_LINESEGMENT_H
