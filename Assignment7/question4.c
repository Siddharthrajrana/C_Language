// 4. Write a program to calculate HCF of two numbers
#include <stdio.h>
int main()
{
    int x, y, hcf = 0, i, lcm;

    printf("Enter two numbers ");
    scanf("%d %d", &x, &y);

    for (i = x > y ? x : y; i <= x * y; i++)

        if (i % x == 0 && i % y == 0)

            break;

    printf("HCF of %d and %d is %d", x, y, (x * y) / i);
    return 0;
}