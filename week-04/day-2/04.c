#include <stdio.h>




struct rectangular_cuboid {
    double a;
    double b;
    double c;
};

double getsurface(struct rectangular_cuboid cube);
// TODO:
// Write a function called "GetSurface" that takes a RectangularCuboid
// and returns it's surface

// TODO:
// Write a function called "GetVolume" that takes a RectangularCuboid
// and returns it's volume

int main()
{
    struct rectangular_cuboid cube;
    printf("Type length of 'a' of a cuboid\n");
    scanf("%lf", &cube.a);
    printf("Type length of 'b' of a cuboid\n");
    scanf("%lf", &cube.b);
    printf("Type length of 'c' of a cuboid\n");
    scanf("%lf", &cube.c);

    printf("Cuboid's surface is:%.1lf unit(s)\n", getsurface(cube));

    return 0;
}

double getsurface(struct rectangular_cuboid cube)
{
  double sfc = 2 * (cube.a * cube.b + cube.b * cube.c + cube.a * cube.c);
  return sfc;
}
