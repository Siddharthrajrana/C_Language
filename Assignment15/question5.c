//5. Write a function to find the first occurrence of adjacent duplicate values in the array.
// Function has to return the value of the element.
#include<stdio.h>
int firstDuplicate(int a[], int n)
{
    for(int i=1 ; i<n ; i++ )
    {
        if(a[i]==a[i-1])
        {
            return a[i];
        }
    } 
    return -1;
}
int main()
{
    int size,result;
    printf("Enter the size of array: ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter %d integers: ",size);
    for(int i=0 ; i<size ; i++)
    {
        scanf("%d",&arr[i]);
    }

    result = firstDuplicate(arr,size);

    if(result>0)
    printf("First Adjacent Duplicate is %d ",result);
    else
    printf("There is no such Duplicate.");

    return 0;
}