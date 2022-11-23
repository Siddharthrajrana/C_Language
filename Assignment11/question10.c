//10. Write a program in C to find the sum of 
//the series 1!/1+2!/2+3!/3+4!/4+5!/5 using the function.
#include<stdio.h>
int facTorial(int n)
{
    int i,x=1;
    for(i=1;i<=n;i++)
    {
       x*=i;
    }
     return x;
}
int sumOfSeries(int k)
{   
    int j,s=1;
    for(j=1;j<=k;j++)
    {
        s+=facTorial(j)/j;
    }
    return s;
}
int main()
{
  int num;
  printf("Enter the nth term: ");
  scanf("%d",&num);

  printf("%d ",sumOfSeries(num));

  return 0;
}