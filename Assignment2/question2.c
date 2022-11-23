#include<stdio.h>
int main(){
    // Q.2. program to print a number without its unit digit 
    int a, b;
     
    printf("Enter an integer no. ");
    scanf("%d", &a);

    b=a/10;

    printf(" The unit digit of the integer is %d", b);

    return 0;

}