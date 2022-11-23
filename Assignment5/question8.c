//8. Write a program to print squares of the first N natural numbers
#include<stdio.h>
int main(){
    int i=1, n;
    printf("Enter a natural number upto which you want to find square ");
    scanf("%d",&n);

    while (i<=n)
    {
        printf("\n%d",i*i);
        i++;
    }
    
return 0;
}