// 9. Write a function to check whether a given number contains a given digit or not. (TSRS)
#include <stdio.h>
int givenDigit(int x, int y)
{
    int digit;
    while (x != 0)
    {
        digit = x % 10;
        if (digit == y)
        {
            return 1;
        }
        x = x / 10;
    }
}
int main()
{
    int num, digit;

    printf("Enter a number : ");
    scanf("%d", &num);
    printf("Enter the digit you want to check: ");
    scanf("%d", &digit);

    if (givenDigit(num, digit))
    {
        printf("Yes the number %d contain digit %d", num, digit);
    }
    else
        printf("No the number %d didn't contain digit %d", num, digit);

    return 0;
}