#include <stdio.h>
int main()
{
    int x, y, i, j,k;

    printf("Enter the equal number of rows and columns ");
    scanf("%d %d", &x, &y);
    for (i = x; i > 0; i--)
    {
        for (j = 0; j <= y; j++)
        {    
           
            if (i <= j)
                 printf("*");
            
            else
            printf(" ");
           
        }
        printf("\n");
    }
    return 0;
}