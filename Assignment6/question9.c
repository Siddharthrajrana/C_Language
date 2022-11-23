//9. Write a program to calculate LCM of two numbers
#include<stdio.h>
int main(){
    int  l,n1,n2;

    printf("Enter two numbers ");
    scanf("%d %d", &n1,&n2);
     
    for ( l=n1>n2?n1:n2; l<=n1*n2; l++)
    
        if (l%n1==0&&l%n2==0)
        
           break;
        
        printf("LCM is %d",l);
        return 0;
}