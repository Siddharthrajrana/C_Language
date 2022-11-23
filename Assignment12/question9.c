//9. Write a recursive function to print octal of a given decimal number
#include<stdio.h>
int printOctal(int);
int main()
{
    int num ;

    printf("Enter a decimal number: ");
    scanf("%d",&num);

    printf("The Octal conversion of %d is: ",num);
    printOctal(num);

    return 0;
}
int printOctal(int n)
{
    if(n==0)
    return 0;
    
    printOctal(n/8);
    printf("%d",n%8);
}