#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int x;
    int y;
} point_t;

// Create a function the constructs a point
// It should take it's x and y coordinate as parameter

// Create a function that takes 2 Points as a pointer and returns the distance between them
float distance (point_t first, point_t second);

int main()
{
    point_t first = {0,0};
    point_t second = {0,0};
    printf("Type x coordinate for first point:\n");
    scanf("%d", &first.x);
    printf("Type y coordinate for first point:\n");
    scanf("%d", &first.y);
    printf("Type x coordinate for second point:\n");
    scanf("%d", &second.x);
    printf("Type y coordinate for second point:\n");
    scanf("%d", &second.y);

    printf("Distance between two points: %.2f units", distance(first, second));

    return 0;
}

float distance (point_t first, point_t second)
{
    float dist = sqrt(pow(first.x - second.x, 2) + pow(first.y - second.y, 2));
    return dist;
}
