//2. Write a function to find the smallest number from the given array of any size. (TSRS)
#include<stdio.h>
int smallNum(int a[],int n)
{
    int small=a[0];
    for(int i=1 ; i<n ; i++)
    {
        if(small>a[i])
          small=a[i];
    }
    return small;
}
int main()
{
    int size,min;
    printf("Enter the size of array ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter %d elements in array: ",size);
    for(int i=0 ; i<size ; i++)
    {
        scanf("%d",&arr[i]);
    }

    min=smallNum(arr,size);
    printf("The smallest number is %d ",min);

    return 0;
}