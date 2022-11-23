#include <stdio.h>
//Q.9.Write a program to find the greatest among three given numbers. Print number once if the greatest number appears two or three times
int main()
{

    int x, y,z;
    printf("Enter three numbers ");
    scanf("%d %d %d", &x, &y, &z);

    if (x > y && x > z)
        printf("%d", x);
    else if (y>=z)
        printf("%d", y);
    else
        printf("%d", z);
    
    printf("\n");
    return 0;
}