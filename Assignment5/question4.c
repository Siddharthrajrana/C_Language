//4. Write a program to print the first N odd natural numbers.
#include <stdio.h>
int main()
{
    int i = 1, n;

    printf("Enter a natural number no.");
    scanf("%d", &n);

    while (i <= n)
    {
        printf("\n%d", i);
        i = i + 2;
    }
    printf("\n");
    return 0;
}