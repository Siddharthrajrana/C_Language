//5. Write a program in C to find the sum of left diagonals of a matrix.
#include<stdio.h>
int main()
{
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}},sum=0;
    //print matrix
    printf("\n\n");
    for(int i=0 ; i<3 ; i++)
    {
        for(int j=0 ; j<3 ; j++)
        {
           printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
    //print sum
    for(int i=0 ; i<3 ; i++)
    {
        for(int j=0 ; j<3 ; j++)
        {
            if(i+j==2)
            {
                sum=sum+a[i][j];
            }
        }
    }
    printf("Sum is %d",sum);
    printf("\n\n");

    return 0;
}