//2. Write a program to calculate sum of first N even natural numbers
#include<stdio.h>
int main(){

    int i,a,x=0;

    printf("Enter natural number N ");
    scanf("%d",&a);

     for ( i = 0; i <=a*2; i=i+2)
     {
         x+=i;
     }
        
    printf("Sum of first N even natural no. is %d",x);
    
    return 0;
    
}