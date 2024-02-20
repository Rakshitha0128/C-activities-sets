//Write a program to find if a triangle is scalene
#include <stdio.h>

int input_side();
int check_scalene(int a, int b, int c);
void output(int a, int b, int c, int isscalene);

int main()
 {
    int side1, side2, side3;
    int isScalene;
    side1 = input_side();
    side2 = input_side();
    side3 = input_side();

    isScalene = check_scalene(side1, side2, side3);
    output(side1, side2, side3, isScalene);

    return 0;
}
int input_side() 
{
    int side;
    printf("Enter the length of a side: ");
    scanf("%d", &side);
    return side;
}
int check_scalene(int a, int b, int c) 
{
    if (a != b && a != c && b != c)
     {
        return 1; 
    } 
    else 
    {
        return 0; 
    }
}

void output(int a, int b, int c, int isScalene)
 {
    printf("Sides of the triangle: %d, %d, %d\n", a, b, c);
    if (isScalene)
     {
        printf("The triangle is scalene.\n");
    } else {
        printf("The triangle is not scalene.\n");
    }
}
