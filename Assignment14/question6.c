//6. Write a program to sort elements of an array of size 10. Take array values from the
//user
#include<stdio.h>
int main()
{
    int i,j, arr[10],temp;

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
    for(i=0;i<10;i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}