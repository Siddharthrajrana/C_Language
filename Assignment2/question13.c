#include<stdio.h>
int main(){
    // Q.12. Program to move unit digit to hundred place
    int x;

    printf("Enter a three digit no. ");
    scanf("%d",&x);

    x=x%10*100+x/10;

    printf("%d",x);

    return 0;

    
}