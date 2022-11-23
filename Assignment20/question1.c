//1. Write a function to swap values of two in variables of calling function. (TSRS)
#include<stdio.h>
int swap(int* , int*);
void main()
{
    int x , y;
    printf("Enter two numbers ");
    scanf("%d%d",&x,&y);

    swap(&x,&y);

    printf("Tne value of x and y is %d %d",x,y);

}
int swap( int *n1 , int *n2)
{
    int temp;

    temp=*n1;
    *n1=*n2;
    *n2=temp;

    return (*n1 , *n2);
}
