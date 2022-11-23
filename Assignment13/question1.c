//1. Write a recursive function to calculate sum of first N natural numbers
#include<stdio.h>
int calSum(int);
int main()
{
    int num;

    printf("Enter the nth term ");
    scanf("%d",&num);

    printf("Sum is %d ",calSum(num) );
    

    return 0;
}
int calSum(int n)
{   
    int s=0;

    if(n==0)
    return 0;
    
    return s=n+calSum(n-1);
}