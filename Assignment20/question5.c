//5. Write a program to find the maximum number between two numbers using a pointer
#include<stdio.h>
int main()
{
    int num1 , num2 ;
    
    printf("Enter the First Number : ");
    scanf("%d",&num1);
    printf("Enter the Second Number : ");
    scanf("%d",&num2);

    int *p1 , *p2 ;
    p1 = &num1;
    p2 = &num2;
    
    if(*p1>*p2)
    printf("The greatest of the two numbers is %d",*p1);
    else 
    printf("The greatest of the two numbers is %d",*p2);


}