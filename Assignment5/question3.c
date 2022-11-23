//3. Write a program to print the first N natural numbers in Reverse Order.

#include <stdio.h>
int main()
{
    int i = 0, n;

    printf("Enter tne Number of Natural no. you want to print in reversed order ");
    scanf("%d", &n);

    while (i < n)
    {
        printf("\n%d", n);
        n--;
    }
    printf("\n");
    return 0;
}