//1. Write a program to print MySirG n times on the screen
#include<stdio.h>
int main(){
    int i=1,n;
    printf("Enter tne number of times you want to print MySirG ");
    scanf("%d",&n);
    while(i<=n){
        printf("\nMySirG");
        i++;
    }
    printf("\n");
    return 0;

}