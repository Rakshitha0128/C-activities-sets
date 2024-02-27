//Write a program to find the triangle with smallest area in n given triangles.
#include <stdio.h>

typedef struct _triangle 
{
    float base, altitude, area;
} Triangle;

int input_n()
 {
    int n;
    printf("Enter the number of triangles: ");
    scanf("%d", &n);
    return n;
}

Triangle input_triangle()
 {
    Triangle t;
    printf("Enter the base of the triangle: ");
    scanf("%f", &t.base);
    printf("Enter the altitude of the triangle: ");
    scanf("%f", &t.altitude);
    return t;
}