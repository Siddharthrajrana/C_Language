//10. Write a program which takes the cost price and selling price of a product from the user. Now calculate and print profit or loss percentage
#include <stdio.h>
int main()
{

    float CP, SP, profit, loss;
    printf("Enter Cost Price of the Article ");
    scanf("%f", &CP);
    printf("Enter Selling Price of the Article ");
    scanf("%f", &SP);

    if (CP < SP)
    {
        profit = (SP - CP) / CP * 100;
        printf("Proit %% is %f", profit);
    }
    else
    {
        loss = (CP - SP) / CP * 100;
        printf("Loss %% is %f", loss);
    }

    return 0;
}