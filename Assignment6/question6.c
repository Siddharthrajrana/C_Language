//6. Write a program to calculate factorial of a number
#include<stdio.h>
int main(){
    int i, n, x=1;
     printf("Enter a number ");
     scanf("%d",&n);
     
     if (n>0)
     {
         for ( i = 1; i <= n; i++)
     {
       x*=i;

     }
     printf("Factorial of the given number is %d", x);
     }
     else
     {
         printf("Factorial is not possible for negative numbers and 0 .");
     }
     
     
     

     return 0;
     

}