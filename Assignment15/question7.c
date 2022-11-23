//7. Write a function in C to count a total number of duplicate elements in an array.
#include<stdio.h>
int countDuplicate(int a[],int n)
{
    int temp=0;
    //shorting
    for(int i=0 ; i<n ; i++)
    {
        for(int j=i+1 ; j<n ; j++)
        {
            if(a[i]<a[j]);
              {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
              }
        }
    }
    //count duplicte value
    int count=0;
    for(int i=1; i<n ; i++)
    {
        if(a[i]==a[i-1])
         count++;
    }
    return count;
}
int main()
{
    int size;
    printf("Enter the size of Array ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter the %d elements of Array ",size);
    for(int i=0 ; i<size ; i++)
    {
     scanf("%d",&arr[i]);
    }
    

    printf("Number of Duplicate elements is %d", countDuplicate(arr,size));
   
    
    return 0;
}