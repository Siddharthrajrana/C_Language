// 8. Write a program to check whether a given number is a Prime number or not
#include <stdio.h>
int main()
{
    int n, i;

    printf("Enter a number ");
    scanf("%d", &n);

    for (i = 2; i <= n-1; i++)
    {
       if (n % i == 0)
        break;
    }

    if (i==n)
    {
        printf("%d Number is  prime ",n);
    }
    else
    {
        printf("%d Number is not prime ", n);
    }

    return 0;
}