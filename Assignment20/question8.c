//8. Write a program to compute the sum of all elements in an array using pointers.
#include<stdio.h>
int main()
{
   
    int size ;
    printf("Enter the size of Array ");
    scanf("%d",&size);

    int arr[size],*p;
    p = arr;

    printf("Enter %d elements of Array :",size);
    for(int i=0 ;i<size; i++)
    {
        scanf("%d",&arr[i]);
    }

    //sum
    int sum=0;
    for(int i=0 ;i<size; i++)
    {
        sum = sum + (*(p+i));
    }
    printf("Sum of elements is %d",sum);


}