#include <stdio.h>
int main()
{
    int row;
    char k;
    printf("Enter the number of rows ");
    scanf("%d", &row);

    for (int i = 1; i <= row; i++)
    {
        k = 'A';
         for (int j = 1; j <= 2 * row - 1; j++)
        {
            if (j >= row + 1 - i && j <= row + i - 1)
            {
                printf("%c", k);
                j < row ? k++ : k--;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}