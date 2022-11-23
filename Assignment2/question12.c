#include<stdio.h>
int main(){ 
    //Q.12. program to convert Rs into USD
    float USD,Rs;

    printf("Enter amount in Rs.");
    scanf("%f",&Rs);

    USD = Rs/76.23;
    printf("Amount in USD is %f", USD);

    return 0;

}