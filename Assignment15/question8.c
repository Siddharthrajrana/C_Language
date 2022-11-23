//8. Write a function in C to print all unique elements in an array.
#include<stdio.h>
void printUnique(int a[], int n)
{   
  //shorting
   for(int i=0 ; i<n-1 ; i++)
   {
     for(int j=i+1 ; j<n ; j++)
     {
        if(a[i]>a[j])
        {
          int temp = a[i];
          a[i]=a[j];
          a[j]=temp;
        }
     }
   }
  //print unique element
   for(int i=0 ; i<n ; i++)
   {  
     if(a[i]==a[i+1])
     i++;
     else 
     printf("%d ",a[i]);
   }
}
int main()
{
    int size ;
    printf("Enter the size of element ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter the %d elements: ",size);
    for(int i=0 ; i<size ; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("The unique elements in the above array is : ");
    printUnique(arr,size);

    return 0;
}