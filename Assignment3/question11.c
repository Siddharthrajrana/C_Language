//11. Write a program to take marks of 5 subjects from the user. Assume marks are given out of 100 and passing marks is 33. Now display whether the candidate passed the exam of fail
#include <stdio.h>
int main()
{

    int a, b, c, d, e;
    printf("Enter the marks obtained in 5 subjects ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    if (a <= 100 & b <= 100 & c <= 100 & d <= 100 & e <= 100 & a >= 0 & b >= 0 & c >= 0 & d > 0 & e >= 0)
    {
        if (a >= 33 & b >= 33 & c >= 33 & d >= 33 & e >= 33)
            printf("Psssed");
        else
            printf("Failed");
    }
    else
        printf("Invalid Marks");

    return 0;
}