//6. Write a function in C to read n number 
// of values in an array and display it in reverse order.
#include<stdio.h>
void reverseArr(int a[],int n)
{
    for(int i=n-1 ; i>=0 ; i--) 
    {
      printf("%d ",a[i]);
    }
}
int main()
{
    int size;
    printf("Enter the size of Array ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter %d elements ",size);
    for(int i = 0 ; i < size ; i++ )
    {
        scanf("%d",&arr[i]);
    }
    
    printf("Reversed Array is ");
    reverseArr(arr,size);

    return 0;
}