//5. Write a recursive function to print first N even natural numbers
#include<stdio.h>
int printEven(int);
int main()
{
    int num;
    
    printf("Enter the number of even you want ");
    scanf("%d",&num);

    printf("%d even number are as folows: \n",num);
    printEven(num);
}
int printEven(int n)
{
    if(n==0)
    return 1;

    printEven(n-1);
    return printf("%d ",2*n);
}