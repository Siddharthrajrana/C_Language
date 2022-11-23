//5. Write a program to find the smallest number stored in an array of size 10. Take array
//values from the user
#include<stdio.h>
int main()
{
    int i,arr[10],smallest=9999;

    printf("Enter ten natural numbers ");

    for(i=0;i<10;i++)
      {
        scanf("%d",&arr[i]);
      }
    for(i=0;i<10;i++)
      {
        if(smallest>=arr[i])
           smallest=arr[i];
      }
    printf("Smallest number is %d",smallest);

    return 0;
}