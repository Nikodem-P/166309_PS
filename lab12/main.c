#include <stdio.h>
#include "point.h"
#include "linesegment.h"
#include "triangle.h"
#include "digitalclock.h"

int main() {
    LineSegment lSegment, lSegment2;
    Point a, b, c;

    a = makePoint(5,5);
    b = makePoint(3, 2);
    c = makePoint(6, -3);
    lSegment = makeLineSegment(4, 8, 2, 2);
    lSegment2 = makeLineSegmentFromPoints(&a, &b);

    showSegment(&lSegment);
    printf("length1: %.2lf\n", length(&lSegment));
    showSegment(&lSegment2);
    printf("length2: %.2lf\n", length(&lSegment2));
    printf("\nslope1: %.2lf, slope2: %.2lf\n", slope(&lSegment), slope(&lSegment2));
    printf("perp: %d\n", perpendicular(&lSegment, &lSegment2));
    printf("par: %d\n", parallel(&lSegment, &lSegment2));
    moveSegment(&lSegment, 3, 4);
    printf("Przesuniety: \n");
    showSegment(&lSegment);

    Triangle myTriangle = makeTriangleFromPoints(&a, &b, &c);
    showTriangle(&myTriangle);
    printf("Pole trojkata: %.2lf", area(&myTriangle));
    moveTriangle(&myTriangle, -4, 2);
    showTriangle(&myTriangle);
    printf("Pole trojkata: %.2lf", area(&myTriangle));

    DigitalClock digCl = makeDigitalClock(64, 128);
    printf("\ngodzina: %d, minuta: %d", digCl.godzina, digCl.minuta);
    increment(&digCl, 125);
    printf("\ngodzina: %d, minuta: %d", digCl.godzina, digCl.minuta);
}
