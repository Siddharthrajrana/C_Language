#include <stdio.h>
int main()
{
    int row, k;

    printf("Enter the number of rows ");
    scanf("%d", &row);

    for (int i = 1; i <= row; i++)
    {
        k = 1;
        for (int j = 1; j <= 2 * row - 1; j++)
        {
            if (j >= i && j <= 2 * row - i)
            {
                printf("%d",k);
                j < row ? k++ : k--;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}