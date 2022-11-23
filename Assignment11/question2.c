//2. Write a function to calculate HCF of two numbers. (TSRS)
#include<stdio.h>
int HCF(int n1, int n2){
    int i,x;

    x=n1>n2?n1:n2;

    for(i=x; i>=1;i--)
    {
        if(n1%i==0&&n2%i==0)
        {
           return i;
        }
    }

}
int main(){
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1,&num2);

    printf("HCF is %d",HCF(num1,num2));

    return 0;

}