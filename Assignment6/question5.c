//5. Write a program to calculate sum of cubes of first N natural numbers
#include<stdio.h>
int main(){
    int n,i,x=0;

    printf("Enter a natural no. ");
    scanf("%d", &n);

    for ( i = 1; i <= n ; i++)
    {
        x+=(i*i*i);
    }
    printf("Sum of Cube of first n natural number is %d",x);

    return 0;

}