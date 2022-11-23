#include <stdio.h>
int main()
{
    int n,year;

    printf("\n1.Check a Leap Year ");
    printf("\n2.Check a Non Leap Year ");

    printf("\nChoose any one ");
    scanf("%d", &n);

    switch (n)
    {
    case 1:
      printf("\nEnter a Year ");
      scanf("%d",&year);
      if (year%4==0||year%400==0)
      {
        printf("\nIts Leap Year");
      }
      else
      printf("\nNon Leap Year");
        break;
    case 2:
      printf("\nEnter a Year ");
      scanf("%d",&year);
      if (year%4==0||year%400==0)
      {
        printf("\nIts Leap Year");
      }
      else
      printf("\nNon Leap Year");
            

        break;

    default:
        printf("\nchoose either 1 or 2");
        break;
    }
    return 0;
}