//4. Write a function to rotate an array by n position in d direction.
// The d is an indicative value for left or right. (For example,
// if array of size 5 is [32, 29, 40, 12, 70]; n is 2 and d is left, 
//then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29] )
#include<stdio.h>
int rotateArray(int a[], int n, int r)
{
   for(int i=((n-r)-1) ; i<n ; i++)
   {
    printf("%d ",a[i]);
   }

   for(int i=0 ; i<r ; i++)
   {
    printf("%d ",a[i]);
   }
}
int main()
{
    int size , r ;
    printf("Enter the size of Array ");
    scanf("%d",&size);
    
    int arr[size];
    printf("Enter %d elements of Array ",size);
    for(int i=0 ; i<size ; i++ )
    {
        scanf("%d",&arr[i]);
    }
    
    printf("Enter the number of digit you want to rotate left ");
    scanf("%d",&r);

    printf("Above array is rotated %d elements in left as  ",r);
    rotateArray(arr,size,r);

    return 0;
}