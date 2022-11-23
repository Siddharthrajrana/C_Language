#include<stdio.h>
int main(){
    //program to print day month year

    int D,M,Y;

    printf("Enter the date in format of DD/MM/YYYY:");
    scanf("%d %*c%d %*c%d", &D,&M, &Y);

    printf(" Day - %d  , Month - %d, Year - %d. ", D,M,Y);

    return 0;
}