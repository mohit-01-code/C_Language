#include <stdio.h>
#include <math.h>
#define PI 3.14

float Edistance(int x1, int x2, int y1, int y2)
{
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

float areaofcircle(int x1, int x2, int y1, int y2, float (*fptr)(int, int, int, int))
{

    return PI * fptr(x1, x2, y1, y2) * fptr(x1, x2, y1, y2);
}
int main()
{
    int x1, x2, y1, y2;
    printf("Enter the value of co-ordinate x1 : ");
    scanf("%d", &x1);
    printf("Enter the value of co-ordinate x2 : ");
    scanf("%d", &x2);
    printf("Enter the value of co-ordinate y1 : ");
    scanf("%d", &y1);
    printf("Enter the value of co-ordinate y2 : ");
    scanf("%d", &y2);
    float (*fptr)(int, int, int, int);
    fptr = Edistance;
    printf("The Euclidian distance of given co-ordinates is %f\n", fptr(x1, x2, y1, y2));
    printf("The area of circle is %f\n", areaofcircle(x1, x2, y1, y2, fptr));

    return 0;
}