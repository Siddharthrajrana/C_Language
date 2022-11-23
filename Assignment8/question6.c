#include<stdio.h>
int main(){
    int row;
    printf("Enter the number of rows ");
    scanf("%d",&row);

    for ( int i = 1; i <= row; i++)
    {
        for (int j =1; j<=(2*row-1); j++)
        {
            if (j>=i&&j<=(2*row-i))
                printf("*");
            else
            printf(" ");
            
        }
        printf("\n");
    }
    return 0;
}