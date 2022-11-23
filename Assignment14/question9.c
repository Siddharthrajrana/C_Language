//9. Write a program in C to read n number of values in an array and display it in reverse
// order. Take array values from the user.
#include<stdio.h>
int main()
{
    int n,i,arr[n];

    printf("Enter the size of array ");
    scanf("%d",&n);

    printf("Enter %d numbers \n\n",n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Numbers in reverse order are as follows \n\n");
    for(i=n-1;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}