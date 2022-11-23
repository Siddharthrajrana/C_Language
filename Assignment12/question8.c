//8. Write a recursive function to print binary of a given decimal number
#include<stdio.h>
int printBinary(int);
int main()
{
    int num;

    printf("Enter a decimal number ");
    scanf("%d",&num);

    printf("Binary convertion of %d is: ",num);
    printBinary(num);

    return 0;
}
int printBinary(int n)
{
    if(n==0)
    return n;

    printBinary(n/2);
    printf("%d",n%2);
}