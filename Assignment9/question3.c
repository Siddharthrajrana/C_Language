//Write a program which takes the day number of a week and displays a
//unique greeting message for the day.
#include<stdio.h>
int main(){
     
     int day;

     printf("Enter the day number of a week ");
     scanf("%d",&day);

     switch (day)
     {
     case 1:
        printf("Monday Lets S T A R T");
        break;
     case 2:
         printf("Tuesday NO WORRRIES");
         break;
     case 3:
        printf("Wednesday ON FIRE ");
        break;
     case 4:
        printf("Thrusday Come on U CAN DO IT");
        break;
     case 5:
        printf("Friday One more day to go");
        break;
     case 6:
        printf("Saturday W E E K E N D");
        break;
     case 7:
        printf("Sunday Its HOLIDAY");
        break;
     
     default:
        printf("This day doesn't exist ");
        break;
     }
     return 0;
}
