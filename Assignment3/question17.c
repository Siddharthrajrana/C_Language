//17. Write a program which takes the length of the sides of a triangle as an input. Display whether the triangle is valid or not
#include <stdio.h>
int main()
{

    int x, y, z;
    printf("Enter length of three sides of triangle ");
    scanf("%d%d%d", &x, &y, &z);

    if (x + y > z & x + z > y & y + z > x)
        printf("Triangle is Valid");
    else
        printf("Invalid triangle");

    return 0;
}