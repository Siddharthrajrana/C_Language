#include <stdio.h>
int main()
{
    int row,k;
    printf("Enter the number of rows ");
    scanf("%d", &row);

    for (int i = 1; i <= row; i++)
    {   k=1;
        
        for (int j = 1; j <= (2 * row); j++)
        {   
            if (j >= 1 && j <= row + 1 - i || j >= row + i && j <= (2 * row))
                {
                    printf("%d",k );
                    if (j<row)
                    k++;  
                    else if (j>row)
                    k--;
                }
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}