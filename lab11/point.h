#ifndef LAB11_POINT_H
#define LAB11_POINT_H

typedef struct Point {
    int x;
    int y;
} Point;

Point makePoint(int x, int y);

void showPoint(const Point *p);

void movePoint(Point *p, int deltaX, int deltaY);

double points_distance(const Point *p, const Point *q);

#endif //LAB11_POINT_H
