//2. Write a program to calculate the product of two matrices each of order 3x3.
#include<stdio.h>
int main()
{   
    //first matrix
    int r1,c1;
    printf("Enter the row no. of matrix : ");
    scanf("%d",&r1);
    printf("Enter the no. of column of matrix : ");
    scanf("%d",&c1);
    
    int matrix1[r1][c1];
    printf("Enter the elements of %d*%d matrix .",r1,c1);
    for(int i=0 ; i<r1 ; i++ )
    {
        for(int j=0 ; j<c1 ; j++)
        {
            scanf("%d",&matrix1[i][j]);
        }
    }
    printf("\n\n");
    //second matrix
    int r2,c2;
    printf("Enter the row no. of matrix2 : ");
    scanf("%d",&r2);
    printf("Enter the no. of column of matrix2: ");
    scanf("%d",&c2);
    if(r1==c2)
    {
    int matrix2[r2][c2];
    printf("Enter the elements of %d*%d matrix2 .",r2,c2);
    for(int i=0 ; i<r2 ; i++ )
    {
        for(int j=0 ; j<c2 ; j++)
        {
            scanf("%d",&matrix2[i][j]);
        }
    }
    
    //product algorithm
    int product[r1][c2];
    for(int i=0 ; i<r1 ; i++ )
    {  
        for(int j=0 ; j<c2 ; j++)
        {
           for(int k=0 ; k<c1 ;k++)
           {
             product[i][j] +=matrix1[i][k]*matrix2[k][j];
           } 
        }
    }
    printf("\n\n");
    //print matrix1
    for(int i=0 ; i<r1 ; i++ )
    {
        for(int j=0 ; j<c1 ; j++)
        {
            printf("%d ",matrix1[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
     //print matrix2
    for(int i=0 ; i<r2 ; i++ )
    {
        for(int j=0 ; j<c2 ; j++)
        {
            printf("%d ",matrix2[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
    //print product
    printf("Product of above matrices is\n ");
    for(int i=0 ; i<r1 ; i++ )
    {
        for(int j=0 ; j<c2 ; j++)
        {
            printf("%d     ",product[i][j]);
        }
        printf("\n");
    }
    }
    else 
    printf("Row of 1st matrix should be equal to column of 2nd matrix");

    return 0;
}