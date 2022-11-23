#include<stdio.h>
int main(){
    //Q.1. program to print unit digit of an integer
    int a, b;

    printf("Enter an integer no. ");
    scanf("%d", &a);

    b=a%10;

    printf(" The unit digit of the integer is %d", b);

    return 0;

}