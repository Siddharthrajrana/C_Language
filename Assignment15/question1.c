//1. Write a function to find the greatest number from the given array of any size. (TSRS)
#include<stdio.h>
int findGreatest(int a[],int n)
{
   int greatest =a[0];

   for(int i=1;i<n;i++)
   {
      if(a[i]>greatest)
        greatest=a[i];
   }
   return greatest;
}
int main()
{
   int size,max;

   printf("Enter the size of array ");
   scanf("%d",&size);

   int arr[size];
   printf("Enter %d elements of array: ",size);
   for(int j=0;j<size;j++)
   {
      scanf("%d",&arr[j]);
   }
   
   max=findGreatest(arr,size);
   printf("The greatest integer is %d ",max);

   return 0;
}