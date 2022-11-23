//10. Write a function in C to count the frequency of each element of an array
#include<stdio.h>
int countFrequency(int a[],int n)
{
   //frequency
   for(int i=0 ; i<n ; i++)
   {
    int count = 0;
    for(int j=0 ; j<n ; j++)
    {   
        if(a[i]==a[j])
        {
            count++;
        }
    }
      printf("%d  -  %d\n",a[i],count);
   }
    
}
int main()
{
    int size;
    printf("Enter the size of array ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter %d elements of array ", size);
    for(int i=0 ; i<size ; i++)
    {
        scanf("%d",&arr[i]);
    }

    countFrequency(arr,size);

    return 0;
}