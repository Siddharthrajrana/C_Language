//3. Write a program to calculate the sum of all even numbers and sum of all odd
//numbers, which are stored in an array of size 10. Take array values from the user.
#include<stdio.h>
int main()
{
    int i,sum1=0,sum2=0,arr[10];

    printf("Enter ten digit ");

    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<10;i++)
    {
        if(arr[i]%2==0)
         sum1=sum1+arr[i];

        else
         sum2=sum2+arr[i];
    }
    printf("Sum of even numbers is %d \n",sum1);
    printf("Sum of even numbers is %d \n",sum2);

    return 0;
} 