//8. Write a program to find the second smallest number in an array.Take array values
//   from the user
#include<stdio.h>
int main()
{
    int i, arr[10],j,temp;

    printf("Enter ten natural number ");

    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<10;i++)
    {
       for(j=i+1;j<10;j++)
       {
         if(arr[i]>arr[j])
         {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
         }
       }
    } 

    printf("Second Smallest number is %d ",arr[1]);

    return 0;
}