//14. Write a program to check whether a given number is divisible by 7 or divisible by 3
#include <stdio.h>
int main()
{

    int x;
    printf("Enter a number ");
    scanf("%d", &x);

    if (x % 7 == 0 & x % 3 == 0)
        printf("Divisible by 7 and 3");
    else if (x % 7 == 0 & x % 3 != 0)
        printf("Divisible by 7 only");
    else if (x % 7 != 0 & x % 3 == 0)
        printf("Divisible by 3 only");
    else
        printf("Not Divisible by 7 and 3");

    return 0;
}