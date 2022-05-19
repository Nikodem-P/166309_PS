#ifndef LAB12_TRIANGLE_H
#define LAB12_TRIANGLE_H

#include <stdio.h>
#include "point.h"
#include "math.h"

typedef struct Triangle
{
    Point a;
    Point b;
    Point c;
} Triangle;

Triangle makeTriangle(int ax, int ay, int bx, int by, int cx, int cy);
Triangle makeTriangleFromPoints(const Point* a, const Point* b, const Point* c);
void showTriangle(const Triangle* s);
double area(const Triangle *s);
void moveTriangle(Triangle *s, int deltaX, int deltaY);

#endif //LAB12_TRIANGLE_H
