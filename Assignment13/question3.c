//3. Write a recursive function to calculate sum of first N even natural numbers
#include<stdio.h>
int sumEven(int);
int main()
{
    int num ;

    printf("Enter the number of Even: ");
    scanf("%d",&num);

    printf("Sum of first %d Even natural number is %d ",num, sumEven(num));

    return 0;
}
int sumEven(int n)
{    
    int s=0;
    if(n==0)
    return 0;

    return s=2*n+sumEven(n-1);
}