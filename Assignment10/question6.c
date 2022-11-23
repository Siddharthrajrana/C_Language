//6. Write a function to calculate the factorial of a number. (TSRS)
#include<stdio.h>
float factorialNum(int n){
    int fact=1;
      for (int i = 1; i <= n; i++)
    {
        fact*=i;  
    }
    return fact;
}
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    printf("%.2f", factorialNum(num));

    return 0;
}