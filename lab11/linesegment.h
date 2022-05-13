#ifndef LAB11_LINESEGMENT_H
#define LAB11_LINESEGMENT_H

#include <stdbool.h>
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
double slope(const  LineSegment* s);
bool parallel(const LineSegment* s1, const LineSegment* s2);
bool perpendicular(const LineSegment* s1,const LineSegment* s2);

#endif //LAB11_LINESEGMENT_H
