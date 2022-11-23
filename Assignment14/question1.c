//1. Write a program to calculate the sum of numbers stored in an array of size 10. Take
//   array values from the user
#include<stdio.h>
int main()
{
    int i,j,arr[10],sum=0;
    
    printf("Enter ten digit ");

    for(i=0;i<10;i++)
    {  
        scanf("%d",&arr[i]);

        sum=sum+arr[i];
    }
    
    printf("Sum is %d",sum);

    return 0;
}