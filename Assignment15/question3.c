//3. Write a function to sort an array of any size. (TSRS)
#include<stdio.h>
int shortArray(int a[], int n )
{
    int temp=0;
    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<n ; j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(int i=0 ; i<n ; i++)
    {
       printf("%d ",a[i]);
    }
}
int main()
{
    int size;

    printf("Enter the size of array ");
    scanf("%d",&size);
    
    int arr[size];
    printf("Enter the %d elements of array ", size);
    for(int i=0 ; i<size ; i++ )
    {
        scanf("%d",&arr[i]);
    }

    printf("Shorted array is ");
    shortArray(arr,size);

    return 0;
}