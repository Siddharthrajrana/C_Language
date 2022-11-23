

//7. Write a function to print first N terms of Fibonacci series (TSRN)
#include<stdio.h>
void fiboNacci(int n)
{   
    int i,a=-1,b=1,c;
    for(i=1;i<=n;i++)
    {
       c=a+b;
       printf("%d ",c);
       a=b;
       b=c;
    }
}
int main()
{
  int num ;
  printf("Enter a number: ");
  scanf("%d",&num);

  fiboNacci(num);

  return 0;
}