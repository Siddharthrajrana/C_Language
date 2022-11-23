//3. Write a program in C to find the transpose of a given matrix.
#include<stdio.h>
int main()
{
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};

    printf("Given Matrix is ==>\n");
    for(int i=0 ; i<3 ; i++)
    {
        for(int j=0 ; j<3 ; j++)
        {
            printf("%d   ",a[i][j]);
        }
        printf("\n");
    }
    printf("Transpose of the above Matrix is ==> \n");
    for(int i=0 ; i<3 ; i++)
    {
        for(int j=0 ; j<3 ; j++)
        {
            printf("%d   ",a[j][i]);
        }
        printf("\n");
    }
    return 0 ;
}