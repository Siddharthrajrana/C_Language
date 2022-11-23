//Program to convert a positive number into a negative number and negative
//number into a positive number using a switch statement.

#include<stdio.h>
int main(){
    int num,x;

    printf("\nWhich type of convertion you want ");
    printf("\n1.Positive to Negative ");
    printf("\n2.Negative to Positive ");
    printf("\nChoose any one option ");
    scanf("%d",&x);

    switch (x)
    {
    case 1:
         printf("\nEnter a positive number ");
         scanf("%d",&num);
         printf("\nConverted number is %d",-num);
         
        break;
         
    case 2:
         printf("\nEnter a negative number ");
         scanf("%d",&num);
         printf("\nConverted number is %d",-num);
         
        break;
    
    default:
        break;
    }

}