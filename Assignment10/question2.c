// 2. Write a function to calculate simple interest. (TSRS)
#include <stdio.h>
int main()
{
    float simpleIntrest(float, float, float);
    float s, p, r, t;
    printf("Enter Principal, Rate and Time: ");
    scanf("%f %f %f", &p, &r, &t);
    printf("Simple Intrest is %.2f", simpleIntrest(p, r, t));

    return 0;
}
float simpleIntrest(float p, float r, float t)
{
    return  p * r * t / 100;
}