// 9. Write a program to check whether a given number is an Armstrong number or not
#include <stdio.h>
int main()
{

    int n, count = 0, cnt, rem, mul = 1, result = 0;
    printf("Enter a number ");
    scanf("%d", &n);

   int x = n;
    while (x != 0)
    {
        x = x / 10;
        count++;
    }

    cnt = count;
    x = n;
    while (x != 0)
    {

        rem = x % 10;
        while (cnt != 0)
        {
            mul = mul * rem;
            cnt--;
        }
        result = result + mul;
        cnt = count;
        x = x / 10;
        mul=1;
        
    }

    if (result == n)
        printf("%d is an Armstrong number ", n);
    else
        printf("%d is not an Armstrong number ", n);

    return 0;
}