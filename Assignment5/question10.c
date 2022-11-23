//10. Write a program to print a table of n.
#include<stdio.h>
int main(){
    int i=1,n;
    printf("Which table you want ");
    scanf("%d",&n);

    while(i<=10){
        printf("\n%d",i*n);
        i++;
    }
    printf("\n");
    return 0;

}