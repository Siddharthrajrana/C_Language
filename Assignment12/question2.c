//2. Write a recursive function to print first N natural numbers in reverse order
#include<stdio.h>
int natReverse(int);
int main()
{
    int num ;
    printf("Enter the nth term ");
    scanf("%d",&num);
    printf("First %dth term in reverse order is as follows: \n", num );
    natReverse(num);

    return 0;
}
int natReverse(int n)
{
    if(n==0)
    return 1;
     
    printf("%d ",n);
    natReverse(n-1);
}