//7. Write a recursive function to print squares of first N natural numbers
#include<stdio.h>
int printSquare(int);
int main()
{
  int num;

  printf("Enter the nth term: ");
  scanf("%d",&num);

  printf("The square of first %d natural number are as follows: \n", num);
  printSquare(num);

  return 0;
}
int printSquare(int n)
{
    if(n==0)
    return 1;

    printSquare(n-1);
    return printf("%d ",n*n);

}