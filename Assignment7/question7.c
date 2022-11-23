// 7. Write a program to print all Prime numbers between two given numbers
#include <stdio.h>
int main()
{
   int i, x, y;

   printf("Enter two numbers ");
   scanf("%d %d", &x, &y);

   for (i = x + 1; i <= y - 1; i++)
   {
      for (x = 2; x < i; x++)
      {
         if (i % x == 0)
         {
            break;
         }
      }
      if (x == i)
      {
         printf("%d ", i);
      }
   }
   return 0;
}