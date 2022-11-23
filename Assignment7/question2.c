// 2. Write a program to print first N terms of Fibonacci series
#include <stdio.h>
int main()
{
    int i, a = -1, b = 1, next = 0, n;

    printf("Enter the Nth term ");
    scanf("%d", &n);

    for (i = 0; i <= n; i++)
    {
        next = a + b;
        a = b;
        b = next;
        printf("%d  ", next);
    }
    return 0;
}