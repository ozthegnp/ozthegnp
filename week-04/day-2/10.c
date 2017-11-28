#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    float x;
    float y;

} point_t;

typedef struct
{
    point_t start;
    point_t end;

} section_t;

typedef struct
{
    point_t p;
    float right_side;
} equation_t;

point_t intersection_point(section_t sec1, section_t sec2);

//TODO: write a C program which can find the intersection point of two section

int main()
{
    section_t first_sect, second_sect;

    first_sect.start.x = -8;
    first_sect.start.y = 1;
    first_sect.end.x = 2;
    first_sect.end.y = 5;

    second_sect.start.x = -4;
    second_sect.start.y = 9;
    second_sect.end.x = 2;
    second_sect.end.y = -3;

    point_t intersect = intersection_point(first_sect, second_sect);
    printf("Intersection point: x = %.f, y = %.f.\n", intersect.x, intersect.y);

    return 0;
}

point_t intersection_point(section_t sec1, section_t sec2)
{
    point_t intersection;

    int x1 = sec1.start.x;
    int y1 = sec1.start.y;
    int x2 = sec1.end.x;
    int y2 = sec1.end.y;
    int x3 = sec2.start.x;
    int y3 = sec2.start.y;
    int x4 = sec2.end.x;
    int y4 = sec2.end.y;

    intersection.x = ((x1*y2-y1*x2)*(x3-x4)-(x1-x2)*(x3*y4-y3*x4))/((x1-x2)*(y3-y4)-(y1-y2)*(x3-x4));
    intersection.y = ((x1*y2-y1*x2)*(y3-y4)-(y1-y2)*(x3*y4-y3*x4))/((x1-x2)*(y3-y4)-(y1-y2)*(x3-x4));

    return intersection;
}
