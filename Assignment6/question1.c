//1. Write a program to calculate sum of first N natural numbers
#include<stdio.h>
int main(){
    int i, n,x=0;
    
    printf("Enter the natural no. upto which you want to find the sum ");
    scanf("%d",&n);

    for ( i = 1; i <= n; i++)
    {
       x+=i;
    }
    printf("Sum is %d\n",x);
    
    
    return 0;
    
}