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