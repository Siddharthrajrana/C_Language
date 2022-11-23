//18. Write a program which takes the month number as an input and display number of days in that month
#include <stdio.h>
int main()
{

    int month;
    printf("Enter a month number ");
    scanf("%d", &month);

    if (month == 1 ^ month == 3 ^ month == 5 ^ month == 7 ^ month == 8 ^ month == 10 ^ month == 12)
        printf("Month has 31 Days");
    else if (month == 2)
        printf("Its February ");
    else
        printf("Month has 30 Days");

    printf("\n");
    return 0;
}