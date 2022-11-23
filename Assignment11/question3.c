//3. Write a function to check whether a given number is Prime or not. (TSRS)
#include<stdio.h>
int checkPrime(int n)
{
  int i;
  for(i=2;i<=n-1;i++)
  {
    if(n%i==0)
       return i ;
    else
       return 0;
  }
}
int main()
{   
    int num;

    printf("Enter a number: ");
    scanf("%d",&num);

    if(num==2)
    {
       printf("%d is  Prime ",num);
    }
    else if(checkPrime(num))
    {
      printf("%d is a Non Prime number. ",num);
    }
    else
      printf("%d is  Prime ",num);

    return 0;  
}