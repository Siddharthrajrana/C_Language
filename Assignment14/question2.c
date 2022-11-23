//2. Write a program to calculate the average of numbers stored in an array of size 10.
//Take array values from the user.
#include<stdio.h>
int main()
{
    int i,arr[10];
    float sum=0;
    
    printf("Enter ten digit ");

    for(i=0;i<10;i++)
    {  
        scanf("%d",&arr[i]);

        sum=sum+arr[i];
    }
    
    printf("Average is %.2f",sum/10);

    return 0;
}