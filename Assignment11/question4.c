//4. Write a function to find the next prime number of a given number. (TSRS)
#include<stdio.h>
int nextPrime(int n)
{
    int i=n+1,j;
    while(i)
    {
    for(j=2;j<=i/2;j++)
    {
      if(i%j==0)
       break;
    }
    if(j-1==i/2)
    {
     return i;
     break;
    }
    i++;
    }
}
int main()
{
  int num;

  printf("Enter a Number ");
  scanf("%d",&num);

  printf("Next Prime number is %d",nextPrime(num));

  return 0;
}