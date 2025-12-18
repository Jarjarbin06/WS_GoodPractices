#include <stdio.h>
#include <math.h>

/* Small structs can be passed by value instead of using heap pointers. [web:25][web:29] */
typedef struct {
    double x;
    double y;
} Point;

/* A segment owns two points by value, no dynamic allocation needed. [web:29][web:38] */
typedef struct {
    Point start;
    Point end;
} Segment;

/* Factory-like function that returns a value, no malloc. [web:29] */
Point makePoint(double x, double y)
{
    Point p;

    p.x = x;
    p.y = y;
    return p;
}

/* Build segment from two points passed by value. */
Segment makeSegment(Point start, Point end)
{
    Segment s;

    s.start = start;
    s.end = end;
    return s;
}

/* Read-only API: take const pointer to avoid copying but do not modify. [web:29][web:32] */
double computeSegmentLength(const Segment *segment)
{
    double dx;
    double dy;

    if (segment == NULL) {
        return 0.0;
    }
    dx = segment->end.x - segment->start.x;
    dy = segment->end.y - segment->start.y;
    return sqrt(dx * dx + dy * dy);
}

/* Internal helper only used in this file -> static. [web:8] */
static void printPoint(const Point *point)
{
    if (point == NULL) {
        return;
    }
    printf("(%f,%f)", point->x, point->y);
}

/* Public display function that does not take ownership of data. [web:21][web:30][web:31] */
void displaySegment(const Segment *segment)
{
    double length = 0.0;

    if (segment == NULL) {
        return;
    }
    length = computeSegmentLength(segment);

    printf("Segment[");
    printPoint(&segment->start);
    printf(" -> ");
    printPoint(&segment->end);
    printf("] length = %f\n", length);
}

/* Example of function that updates a struct given by the caller. */
void translateSegment(Segment *segment, double dx, double dy)
{
    if (segment == NULL) {
        return;
    }
    segment->start.x += dx;
    segment->start.y += dy;
    segment->end.x += dx;
    segment->end.y += dy;
}

int main(void)
{
    /* All objects live on the stack, no malloc, no free. [web:29][web:31] */
    Point origin = makePoint(0.0, 0.0);
    Point other = makePoint(3.0, 4.0);
    Segment segment = makeSegment(origin, other);

    displaySegment(&segment);

    translateSegment(&segment, 1.0, -2.0);
    displaySegment(&segment);

    return 0;
}

