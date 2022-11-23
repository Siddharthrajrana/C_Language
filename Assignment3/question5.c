#include<stdio.h>
int main(){ 
    //Q.5 program to check number is three digit or not
    int x;
    printf("Enter a number ");
    scanf("%d",&x);

   
    if (x%1000==x){
        if (x%100==x)
        {
            printf("Number is Not of Three Digit");
        }
        else if (x%10==x)
        {
            printf("Number is Not of Three Digit");
        }
        else
              printf("Number is of Three Digit");
    }
    else 
    printf("Number is Not of Three Digit");
        
    return 0;
    

}