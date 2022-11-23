#include<stdio.h>
int main(){
    //Q.8. Program to check Even or Odd no. number using bitwise operator

    int x,y;
    printf("Enter a number ");
    scanf("%d",&x);

    y=(x&1);

    if(y)
    printf("Odd no.");

    else
    printf("Even no.");

    return 0;

}