//9. Write a program in C to find the square of any number using the function.
#include<stdio.h>
int squAre(int n)
{
   return n*n;
}
int main()
{
  int num;
  printf("Enter a Number: ");
  scanf("%d",&num);
  printf("Square of %d is: %d ",num , squAre(num));

  return 0;

}