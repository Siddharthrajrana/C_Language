//9. Write a program in C to accept a matrix and determine whether it is a sparse matrix.
#include<stdio.h>
int main()
{
    int row , column ;
    printf("Enter the row: ");
    scanf("%d",&row);
    printf("Enter the Column: ");
    scanf("%d",&column);
    printf("\n\n");
    //enter matrix
    printf("Enter the elements of %d*%d matrix.",row,column);
    int matrix[row][column];
    for(int i=0 ; i<row ; i++)
    {
        for(int j=0 ; j<column ; j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }

    //count number of zeros
    int count=0;
    for(int i=0 ; i<row ; i++)
    {
        for(int j=0 ; j<column ; j++)
        {
            if(matrix[i][j]==0)
            count++;
        }
    }
    //print matrix
     printf("\n\n");
    for(int i=0 ; i<row ; i++)
    {
        for(int j=0 ; j<column ; j++)
        {
           printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
    //condition for sparse matrix
    if(count>(row*column)-count)
    printf("Above matrix is a Sparse Matrix ");
    else 
    printf("Above matrix is a NOT Sparse Matrix");
    printf("\n");

    return 0;
}
