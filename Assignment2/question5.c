#include<stdio.h>
int main(){
    // Q.5. Prodram to take three digit and display its sum
    int  a,c,d,x,y,z;

    printf("Enter a three digit number:");
    scanf("%d", &a);
    
    c=a%10;
    x=c;
    a=a/10;
    
    d=a%10;
    y=x+d;
    a=a/10;

    z=a+y;

    printf("Sum of three digit no. is %d", z);
    return 0;
    

}