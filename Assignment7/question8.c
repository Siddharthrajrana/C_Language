// 8. Write a program to find next Prime number of a given number
#include <stdio.h>
int main()
{
    int x, i, j, flag = 0;

    printf("Enter a number ");
    scanf("%d", &x);

    for (i = x + 1; i <= 100; i++)
    {
        flag = 0;

        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            printf("%d", i);
            break;
        }
    }
}