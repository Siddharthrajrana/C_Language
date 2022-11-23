//9. Write a program to print the elements of an array in reverse order.
#include<stdio.h>
int main()
{
    int size ;
    printf("Enter the size of Array ");
    scanf("%d",&size);

    printf("Enter %d elements of Array \n",size);
    int arr[size], *p;
    p = arr;
    

    for(int i=0 ; i<size ; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    //reverse 
    printf("Array in reverse order is : \n");
    for(int i=size-1 ; i>=0 ; i--)
    {
        printf("%d ",*(p+i));
    }
}