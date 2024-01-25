#include<stdio.h>
int input();
void compare(int a,int b,int c, int largest);
void output(int a,int b,int c,int largest);
int main()
{
    int a,b,c,largest;
    a=input();
    b=input();
    c=input();
    compare(a,b,c,largest);
    output(a,b,c,largest);
    return 0;
}
int input()
{
    int x;
    printf("Enter the value");
    scanf("%d",&x);
    return x;
}
void compare(int a,int b,int c, int largest)
{
    if (a >= b && a >= c) {
        largest = a;
        return largest;
    } else if (b >= a && b >= c) {
        largest = b;
         return largest;
    } else {
        largest = c;
        return largest;
    }

}
void output(int a,int b,int c,int largest)
{
    printf("The largest of %d,%d and %d is %d",a,b,c,largest);
}
