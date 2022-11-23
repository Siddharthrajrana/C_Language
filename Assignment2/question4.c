#include<stdio.h>
int main(){
    //Q.4. Program to swap two variable without using third variable
    int a,b;
    printf("Enter two numbers a and b\n");
    scanf("%d %d", &a, &b);

    b=a+b;
    a=b-a;
    b=b-a;

    printf("Swapped value a=%d and b=%d", a, b);

    return 0;

    }