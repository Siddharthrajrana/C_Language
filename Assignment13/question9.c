//9. Write a program in C to count the digits of a given number using recursion.
#include<stdio.h>
int cntDigit(int);
int main()
{
    int num;

    printf("Enter a number ");
    scanf("%d",&num);

    printf("The number of digit in %d is %d ",num ,cntDigit(num));

    return 0;
}
int cntDigit(int n)
{
    int cnt=0;

    if(n==0)
      return 0;

    cnt++;
    return cnt +cntDigit(n/10);
}