//7. Write a program to check whether roots of a given quadratic equation are real & distinct, real & equal or imaginary roots
#include <stdio.h>
#include <math.h>
#include <conio.h>
int main()
{
    float a, b, c, r1, r2, d;
    printf("Enter the value of of a,b,c of quadritic equation  ");
    scanf("%f %f %f", &a, &b, &c);

    d = b * b - 4 * a * c;
    r1 = (-b + sqrt(d)) / (2 * a);
    r2 = (-b - sqrt(d)) / (2 * a);

    if (d > 0)
    {
        
        printf("Roots are real %f and %f", r1, r2);
    }
    else if (d == 0)
    {
        printf("Roots are equal %f and %f", r1, r2);
    }
    else
    {
        printf("Roots are imaginary");
    }

    {
    }
    return 0;
}