//3. Write a program to calculate sum of first N odd natural numbers
#include<stdio.h>
int main(){

    int i,a,x=0;

    printf("Enter natural number N ");
    scanf("%d",&a);

     for ( i = 1; i <=a*2; i=i+2)
     {
         x += i;
     }
    
    printf("Sum of first N odd natural no. is %d",x);
    
    return 0;
    
}