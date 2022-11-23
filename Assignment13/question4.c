//4. Write a recursive function to calculate sum of squares of first n natural numbers
#include<stdio.h>
int sumSquare(int);
int main()
{
    int num ;

    printf("Enter the nth term: ");
    scanf("%d",&num);

    printf("Sum of Square of first %d natural number is %d",num,sumSquare(num));

    return 0;
}
int sumSquare(int n)
{
    int s=0;
    if(n==0)
    return 0;

    return s=n*n+sumSquare(n-1);
}