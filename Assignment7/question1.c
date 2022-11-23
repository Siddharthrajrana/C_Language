//1. Write a program to find the Nth term of the Fibonnaci series
#include<stdio.h>
int main(){
    int a=-1,b=1,next=0,n,i;

    printf("Enter the Nth term ");
    scanf("%d",&n);


    for ( i=0; i <= n; i++)
    {
        next=a+b;
        a=b;
        b=next;
    }
    printf("%dth term of Fibonnachi Series is %d",n,next);
    return 0;
    
}