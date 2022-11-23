// 3. Write a program to check whether a given number is there in the Fibonacci series or not.
#include <stdio.h>
int main()
{
   int n, i, a = -1, b = 1, next = 0, flag = 0;
   printf("Enter a number ");
   scanf("%d", &n);

   for (i = 0; i <= 100; i++)
   {
      next = a + b;
      if (n == next)
         flag = 1;
      break;
      a = b;
      b = next;
   }
   if (flag = 1)
   {
      printf("%d is of Fibonacci Series", n);
   }
   else
      printf("%d is not of Fibonacci Series", n);

   return 0;
}
