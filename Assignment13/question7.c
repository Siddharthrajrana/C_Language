//7. Write a recursive function to calculate HCF of two numbers
#include<stdio.h>
int calHcf(int,int);
int main()
{
    int num1,num2;

    printf("Enter two numbers ");
    scanf("%d %d",&num1,&num2);

    printf("HCF is %d",calHcf(num1,num2));

    return 0;
}
int calHcf(int n1,int n2)
{
    if(n1==n2)
      return n1;
    
    else if(n1%n2==0)
      return n2;

    else if(n2%n1==0)
      return n1;

    else
      {
        if (n1>n2)
           calHcf(n2,n1-n2);

        else
           calHcf(n1,n2-n1);
      }    
}