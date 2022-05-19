#include "triangle.h"

Triangle makeTriangle(int ax, int ay, int bx, int by, int cx, int cy)
{
    Triangle abc;
    abc.a.x = ax;
    abc.a.y = ay;
    abc.b.x = bx;
    abc.b.y = by;
    abc.c.x = cx;
    abc.c.y = cy;

    return abc;
}

Triangle makeTriangleFromPoints(const Point* a, const Point* b, const Point* c)
{
    Triangle abc;
    abc.a.x = a->x;
    abc.a.y = a->y;
    abc.b.x = b->x;
    abc.b.y = b->y;
    abc.c.x = c->x;
    abc.c.y = c->y;

    return abc;
}

void showTriangle(const Triangle* s)
{
    printf("\nA(%d, %d), B(%d, %d), C(%d, %d)\n", s->a.x, s->a.y, s->b.x, s->b.y, s->c.x, s->c.y);
}

double area(const Triangle *s)
{
    double ab = sqrt(pow((s->b.x - s->a.x), 2) + pow((s->b.y - s->a.y),2));
    double bc = sqrt(pow((s->c.x - s->b.x), 2) + pow((s->c.y - s->b.y),2));
    double ac = sqrt(pow((s->a.x - s->c.x), 2) + pow((s->a.y - s->c.y),2));
    double p = (ab + bc + ac)/2.0;
    return sqrt(p*(p-ab)*(p-bc)*(p-ac));
}

void moveTriangle(Triangle *s, int deltaX, int deltaY)
{
    s->a.x += deltaX;
    s->b.x += deltaX;
    s->c.x += deltaX;
    s->a.y += deltaY;
    s->b.y += deltaY;
    s->c.y += deltaY;
}