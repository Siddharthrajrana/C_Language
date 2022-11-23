#include <stdio.h>
int main()
{    // Q.10. Program to make last digit 0 of a given integer

    int a, b, c;

    printf(" Enter an integer:");
    scanf("%d", &a);

    b = a / 10;
    c = b * 10;

    printf("Convertion of integer in last digit as 0 is %d", c);

    return 0;
}