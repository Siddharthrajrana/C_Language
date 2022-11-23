#include <stdio.h>
int main()
{
    //Q.8.Write a program to check whether a given year is a leap year or not.
    int x;
    printf("Enter a year ");
    scanf("%d", &x);

    if (x % 400 == 0 ^ x % 4==0)
        printf("Leap year");
    
    else
        printf("Not a leap year");
    return 0;
}