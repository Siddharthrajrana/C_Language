//4. Write a program to find the greatest number stored in an array of size 10. Take array
//values from the user.
#include<stdio.h>
int main()
{
    int i,arr[10],greatest=-999999;

    printf("Enter ten numbers ");

    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);

    }
    for(i=0;i<10;i++)
    {
        if(arr[i]>=greatest)
         { 
            greatest =arr[i];
         }      
    }
    printf("Greatest number is %d ", greatest);

    return 0;
}