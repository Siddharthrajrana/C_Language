//10. Write a program in C to copy the elements of one array into another array.Take array
// values from the user
#include<stdio.h>
int main()
{
    int i,n,arr[n],brr[n];

    printf("Enter the size of array ");
    scanf("%d",&n);

    printf("Enter %d digits \n\n ",n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The copied array is as follows \n\n");

    for(i=0;i<n;i++)
    {
        printf("%d ",brr[i]);
    }

    return 0;
}