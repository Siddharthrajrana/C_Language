#include<stdio.h>
int main(){ 
    //Q>! program to check number is even or odd without using %
    int x;
    printf("Enter a number ");
    scanf("%d",&x);

    if (x&1)
    printf("Number is Odd");
    else 
    printf("Number is Even");
        
    
   return 0;
    

}