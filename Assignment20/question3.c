//3. Write a function to sort an array of int type values. [ void sort(int *ptr,int size); ]
#include<stdio.h>
#include<string.h>

void shortArray(int* , int );
void main()
{
    int size, arr[size];

    printf("Enter the size of Array   : ");
    scanf("%d",&size);
    printf("Enter %d elements of Array ",size);
    for(int i=0 ; i<size ; i++)
    {
        scanf("%d",&arr[i]);
    }
     
    printf("Array after Shorting is \n");
    shortArray( arr , size );

}

void shortArray(int *p , int size)
{    
    //short
    for(int i=0 ; i<size ; i++)
    {   
        for(int j=i+1 ; j<size ; j++)
        {
            if(*(p+i)>*(p+j))
            {    
                int temp = *(p+i);
                *(p+i) = *(p+j);
                *(p+j) = temp;
            }
        }
    }
    //print shorted
    for(int i=0 ; i<size ; i++)
    {
        printf("%d ",*(p+i));
    } 
    
}