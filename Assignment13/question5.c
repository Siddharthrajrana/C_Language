//5. Write a recursive function to calculate sum of digits of a given number
#include<stdio.h>
int sumDigit(int);
int main()
{
    int digit;

    printf("Enter a digit ");
    scanf("%d",&digit);

    printf("Sum of digits of %d is %d",digit,sumDigit(digit));

    return 0;
}
int sumDigit(int n)
{
    int s=0;
    if(n==0)
    return 0;

    return s=n%10+sumDigit(n/10);
}