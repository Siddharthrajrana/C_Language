// 2. Write a menu driven program with the following options:a. Addition
// b. Subtraction c. Multiplication d. Division e. Exit
#include <stdio.h>
int main()
{

    int n, x, y;
    while (1)
    {
        printf("\n1.Addition");
        printf("\n2.Subtraction");
        printf("\n3.Multiplication");
        printf("\n4.Division");
        printf("\n5.Exit");

        printf("\nChoose any operation number ");
        scanf("%d", &n);

        switch (n)
        {
        case 1:
            printf("\nEnter two numbers ");
            scanf("%d %d", &x, &y);
            printf("\nSum of %d and %d is %d", x, y, x + y);
            break;

        case 2:
            printf("\nEnter two numbers ");
            scanf("%d %d", &x, &y);
            printf("\nDifference of %d and %d is %d", x, y, x - y);
            break;

        case 3:
            printf("\nEnter two numbers ");
            scanf("%d %d", &x, &y);
            printf("\nProduct of %d and %d is %d", x, y, x * y);
            break;

        case 4:
            printf("\nEnter two numbers ");
            scanf("%d %d", &x, &y);
            printf("\nQuotient of %d and %d is %d", x, y, x / y);
            break;

        default:
            printf("\nInvalid Choice ");
            break;
        }
        printf("\n");
        if (n == 5)
        {
            break;
        }
    }
    return 0;
}
