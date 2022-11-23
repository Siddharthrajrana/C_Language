//6. Write a recursive function to calculate factorial of a given number
#include<stdio.h>
int calFact(int);
int main()
{
    int num;

    printf("Enter a number ");
    scanf("%d",&num);

    printf("Factorial of %d is %d",num,calFact(num));

    return 0;
}
int calFact(int n)
{
    int fact=1;

    if(n==1)
    return 1;

    return fact=n*calFact(n-1);
}