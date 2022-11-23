// 4. Write a menu driven program with the following options:
// a. Check whether a given set of three numbers are lengths of an
// isosceles triangle or not
// b. Check whether a given set of three numbers are lengths of sides of
// a right angled triangle or not
// c. Check whether a given set of three numbers are equilateral triangle
// or not
// d. Exit
#include <stdio.h>
int main()
{

    int n, a, b, c;
    while (1)
    {
       
        printf("\n1.Isosceles triangle ");
        printf("\n2.Right angled triangle ");
        printf("\n3.Equilateral triangle ");
        printf("\n4.Exit");

        printf("\nEnter your choice ");
        scanf("%d", &n);

        switch (n)
        {
        case 1:
            printf("\nEnter three sides ");
            scanf("%d%d%d", &a, &b, &c);
            if (a == b || b == c || c == a)
            {
                printf("\nYeah you are correct its Isosceles triangle ");
            }
            else
                printf("\nNo its not Isosceles triangle ");

            break;
        case 2:
            printf("\nEnter three sides ");
            scanf("%d%d%d", &a, &b, &c);
            if (a * a + b * b == c * c || c * c + b * b == a * a || a * a + c * c == b * b)
            {
                printf("\nYeah you are correct its Right angled triangle ");
            }
            else
                printf("\nNo its not Right angled triangle ");

            break;
        case 3:
            printf("\nEnter three sides ");
            scanf("%d%d%d", &a, &b, &c);
            if (a == b || b == c || c == a)
            {
                printf("\nYeah you are correct its Equilateral triangle ");
            }
            else
                printf("\nNo its not Equilateral triangle ");

            break;

        default:
            printf("\nOK Program Exit here ");
            break;
        }
        if (n == 4)
        {
            break;
        }
    }

    return 0;
}