//Program to Convert even number into its upper nearest odd number
//Switch Statement
#include<stdio.h>
int main(){
    int num;
    printf("Enter an even number ");
    scanf("%d",&num);

    switch (num%2)
    {
    case 0:
        printf("Nearest odd conversion is %d", num+1);
        break;
    
    default:
       printf("Enter Even number only");
        break;
    }
    return 0;
}