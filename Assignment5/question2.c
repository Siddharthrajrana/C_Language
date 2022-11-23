//2. Write a program to print the first N natural numbers.

#include <stdio.h>
int main()
{
    int i = 1, n;

    printf("Enter tne Number of Natural no. you want to print ");
    scanf("%d", &n);

    while (i <= n)
    {
        printf("\n%d", i);
        i++;
    }
    printf("\n");
    return 0;
}