//8. Write a recursive function to print first N terms of Fibonacci series
#include<stdio.h>
void calFib(int,int,int);
int main()
{
    int a=-1,b=1,n;

    printf("Enter the nth term of Fibonacci Series ");
    scanf("%d",&n);

    calFib(a,b,n);

    return 0;
}
void calFib(int x , int y ,int N)
{
    int z;

    if(N==0)
      return;

    z=x+y;
    x=y;
    y=z;
    printf("%d ",z);
    N--;
    
    calFib(x,y,N);
}