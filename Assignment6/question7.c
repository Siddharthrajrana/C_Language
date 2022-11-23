//7. Write a program to count digits in a given number
#include <stdio.h>
int main()
{
    int i, n, x = 0;

    printf("Enter a number ");
    scanf("%d", &n);

    for (i = 0; i <= n; i++)
    {
        n = n / 10;
    }
    printf("Number of digit in the given number is %d", i);
    return 0;
}
