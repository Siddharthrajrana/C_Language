#include <stdio.h>
int main()
{     // Q.11. Program to append digit and number

    int a, b, c, d;
    printf("Enter an integer number:");
    scanf("%d", &a);

    printf("Enter a digit:");
    scanf("%d", &b);

    c = a * 10;
    d = c + b;

    printf("REquired no. is %d", d);

    return 0;
}