#include <stdio.h>
#include "point.h"
#include "namedpoint.h"
#include "linesegment.h"

int main() {
    LineSegment* lSegment1;
    lSegment1 = (4, 5, 3, 7);
    show(lSegment1);
    return 0;
}