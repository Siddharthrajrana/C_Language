//3. Write a recursive function to print first N odd natural numbers
#include<stdio.h>
int printOdd(int);
int main()
{
    int num ;
    printf("Enter the number of Odd you want: ");
    scanf("%d",&num);
    printf("First %d Odd number are as follows: \n", num);
    printOdd(num);
    return 0;
}
int printOdd(int n)
{   
    if(n==0)
    return 1;
    printOdd(n-1);
    return printf("%d ",(2*n-1));
}