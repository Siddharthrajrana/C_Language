// 5. Write a program to check whether two given numbers are co-prime numbers or not
#include <stdio.h>
int main()
{
    int x, y, i,flag=0;

    printf("Enter two number ");
    scanf("%d %d", &x, &y);

    for (i = 2; i <= x ; i++)
    {
        if (x % i == 0 && y % i == 0)
        {
            flag=1;
            break;
           
        }
    }
    if (flag==1)
    {
        printf("Not Co-prime");
    }
    else
      printf("Co-prime");
      return 0;
    
}
