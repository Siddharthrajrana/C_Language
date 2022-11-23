//2. Write a recursive function to calculate sum of first N odd natural numbers
#include<stdio.h>
int sumOdd(int);
int main()
{
    int num ;

    printf("Enter the number of Odd: ");
    scanf("%d",&num);

    printf("Sum of first %d odd natural number is %d ",num, sumOdd(num));

    return 0;
}
int sumOdd(int n)
{    
    int s=0;
    if(n==0)
    return 0;

    return s=2*n-1+sumOdd(n-1);
}