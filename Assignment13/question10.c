//10. Write a program in C to calculate the power of any number using recursion.
#include<stdio.h>
int calPower(int,int);
int main()
{
    int num , pow;

    printf("Enter a number ");
    scanf("%d",&num);

    printf("Enter its power ");
    scanf("%d",&pow);

    printf("%d raise to the power %d is %d",num ,pow,calPower(num,pow));
    

    return 0;
}
int calPower(int n,int p)
{   
    if(p==0)
       return 1;
       
    return n*calPower(n,p-1);
    
}