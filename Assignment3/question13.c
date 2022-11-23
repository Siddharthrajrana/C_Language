//13. Write a program to check whether a given number is divisible by 3 and divisible by 2
#include <stdio.h>
int main()
{

    int x;
    printf("Enter a number ");
    scanf("%d", &x);

    if (x % 2 == 0 & x % 3 == 0)
        printf("Divisible by 2 and 3");
    else if (x % 2 == 0 & x % 3 != 0)
        printf("Divisible by 2 only");
    else if (x % 2 != 0 & x % 3 == 0)
        printf("Divisible by 3 only");
    else
        printf("Not Divisible by 2 and 3");

    return 0;
}