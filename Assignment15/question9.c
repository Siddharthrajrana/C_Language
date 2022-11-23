//9. Write a function in C to merge two arrays of the same size sorted in descending order.
#include<stdio.h>
void mergeArray(int merge[],int n)
{
   for(int i=0 ; i<n-1 ; i++)
   {
      for(int j= i+1 ; j<n ; j++)
        {
            if(merge[i]<merge[j])
            {
                int temp = merge[i];
                    merge[i]=merge[j];
                    merge[j]=temp;
            }
        }
   }
   for(int i=0 ; i<n ; i++)
   {
    printf("%d ",merge[i]);
   }
   
}
int main()
{
    int sizea , sizeb ;

    printf("Enter size of the first array ");
    scanf("%d",&sizea);
    printf("Enter %d elements of first array ",sizea);
    int a[sizea];
    for(int i=0 ; i<sizea ; i++)
    {
        scanf("%d",&a[i]);
    }
   

    printf("Enter size of the second array ");
    scanf("%d",&sizeb);
    printf("Enter %d elements of second array ",sizeb);
    int b[sizeb];
    for(int i=0 ; i<sizeb ; i++)
    {
        scanf("%d",&b[i]);
    }
    
    //merged array
    int mergesize= (sizea+sizeb);
    int merge[mergesize];

       for(int i=0;i<sizea;i++)
       { 
        merge[i]=a[i];
       }
       for(int i=0; i<sizeb ; i++)
       {
        merge[i+sizea]=b[i];
       }

    printf("Merged array is : ");
    mergeArray(merge,mergesize);

    return 0;

}