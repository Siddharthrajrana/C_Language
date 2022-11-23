//6. Write a recursive function to print first N even natural numbers in reverse order
#include<stdio.h>
int printEvenRev(int);
int main()
{
   int num;

   printf("Enter the number of even you want: ");
   scanf("%d",&num);

   printf("%d Even in Reverse are as folloes: \n", num);
   printEvenRev(num);

   return 0;
}
int printEvenRev(int n)
{
    if(n==0)
    return 1;

    printf("%d ",2*n);
    printEvenRev(n-1);
}