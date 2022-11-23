//1. Write a recursive function to print first N natural numbers
#include<stdio.h>
int printNatural(int);
int main()
{   
    int n;
    printf("Enter the nth term: ");
    scanf("%d",&n);
    printf("First %dth natural number is as follows: \n", n );
    printNatural(n);
    return 0;

}
int printNatural(int n)
{
    if(n==0)
    return 1;
    
    printNatural(n-1);
    return printf("%d ",n);
    
}


     
     
      
