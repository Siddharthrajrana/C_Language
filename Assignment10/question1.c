// 1. Write a function to calculate the area of a circle. (TSRS)
#include <stdio.h>
int main()
{
    float area(float);
    float radius;
    printf("\nEnter the radius of circle: ");
    scanf("%f", &radius);
    printf("Area of the circle is %0.2f\n ", area(radius));
    printf("\n");
    return 0;
}
float area(float r)
{

    return r * r * 3.14;
}