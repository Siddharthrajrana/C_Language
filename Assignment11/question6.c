//6. Write a function to print all Prime numbers between two given numbers. (TSRN)
#include<stdio.h>
void primeBtween(int x, int y)
{
  int i=(x+1),j,n;
   n=y-x;
  while(n)
  { 
    for(int j=2;j<=i/2;j++)
    {
       if(i%j==0)
       break;
    }
    if(j-1==i/2)
    {
      printf("%d",i);
      n--;
    }i++;
  }

}
int main()
{
  int num1,num2;
  printf("Enter the range of two numbers ");
  scanf("%d%d",&num1,&num2);

  primeBtween(num1,num2);

  return 0;
}