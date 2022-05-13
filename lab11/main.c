#include <stdio.h>
#include "point.h"
#include "linesegment.h"

int main() {
    LineSegment lSegment, lSegment2;
    Point a, b;

    a = makePoint(6,-6);
    b = makePoint(2, -2);
    lSegment = makeLineSegment(-1, 5, -1, 5);
    lSegment2 = makeLineSegmentFromPoints(&a, &b);

    show(&lSegment);
    printf("Dlugosc: %lf\n", length(&lSegment));
    show(&lSegment2);
    printf("Dlugosc: %lf\n", length(&lSegment2));
    // perpendicular(&lSegment, &lSegment2);
}
