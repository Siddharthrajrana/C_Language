#include<stdio.h>
int main(){

    int unit,bill;
    
    printf("Check your Electicity Bill\n ");
    printf("\nEnter your Electicity Unit: ");
    scanf("%d",&unit);

    switch (unit)
    {
    case 1 ... 50:
        printf("Your Electricity bill is Rs.%f",unit*0.50*6/5);
        break;

    case 51 ... 100:
        printf("Your Electricity bill is Rs.%f",unit*0.75*6/5);
        break;

    case 101 ... 250:
        printf("Your Electricity bill is Rs.%f",unit*1.20*6/5);
        break;

    case 251 ... 10000050:
        printf("Your Electricity bill is Rs.%f",unit*1.50*6/5);
        break;            
    
    default:
        break;
    }
}