#include <stdio.h>
#include "point.h"
#include "linesegment.h"

int main() {
    LineSegment lSegment, lSegment2;
    Point a, b;

    a = makePoint(5,5);
    b = makePoint(5, 8);
    lSegment = makeLineSegment(4, 8, 2, 2);
    lSegment2 = makeLineSegmentFromPoints(&a, &b);

    show(&lSegment);
    printf("length1: %lf\n", length(&lSegment));
    show(&lSegment2);
    printf("length2: %lf\n", length(&lSegment2));
    printf("\nslope1: %lf, slope2: %lf\n", slope(&lSegment), slope(&lSegment2));
    printf("perp: %d\n", perpendicular(&lSegment, &lSegment2));
    printf("par: %d\n", parallel(&lSegment, &lSegment2));

}
