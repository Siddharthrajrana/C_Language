//10. Write a recursive function to print reverse of a given number
#include<stdio.h>
int reverseNum(int);
int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d",&num);

    printf("Reverse of %d is: ",num);
    reverseNum(num);

    return 0;
}
int reverseNum(int n)
{   
    int s,k;
    if(n==0)
    return 1;
    
    
    printf("%d",n%10);
    reverseNum(n/10);
}