// 5. Write a function to print first N odd natural numbers. (TSRN)
#include <stdio.h>
void printOddnum(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf(" %d ", 2 * i + 1);
    }
}
int main()
{
    int num;

    printf("Enter the Nth term: ");
    scanf("%d", &num);

    printOddnum(num);

    return 0;
}