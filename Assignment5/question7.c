//5. Write a program to print the first N even natural numbers in reverse order.
#include <stdio.h>
int main()
{
    int i = 1, n;

    printf("Enter a natural number no.");
    scanf("%d", &n);

    if (n % 2 == 0)
    {

        while (i <= n)
        {
            printf("\n%d", n);
            n = n - 2;
        }
    }

    else
    {
        n = n - 1;
        while (i <= n)
        {
            printf("\n%d", n);
            n = n - 2;
        }
    }

    printf("\n");
    return 0;
}