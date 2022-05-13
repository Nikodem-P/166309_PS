#include <stdio.h>
#include "point.h"
#include "linesegment.h"

int main() {
    LineSegment lSegment, lSegment2;
    Point a, b;

    a = makePoint(2,2);
    b = makePoint(4, 4);
    lSegment = makeLineSegment(4, 5, 3, 7);
    lSegment2 = makeLineSegmentFromPoints(&a, &b);

    show(&lSegment);
    printf("Dlugosc: %lf\n", length(&lSegment));
    show(&lSegment2);
    printf("Dlugosc: %lf\n", length(&lSegment2));
}
