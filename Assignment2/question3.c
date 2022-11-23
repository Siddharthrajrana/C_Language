#include<stdio.h>
int main(){
    // Q.3. program to swap two values of the given numbers
    int a, b, c;

    printf(" Enter two number a and b: ");
    scanf("%d %d",&a,&b);

    c=b;
    b=a;
    a=c;
    

    printf("Here is Swaped value of a=%d and b= %d", a, b);

    return 0;



}