//8. Write a function to calculate the number of arrangements one can 
//make from n items and r selected at a time. (TSRS)
#include<stdio.h>
int factorial(int k){
    int fact=1;
    for (int i = 1; i <= k; i++)
    {
        fact*=i;
    }
    return fact;
}
int main(){
    int n,r,per;

    printf("Enter n and r value to find arrangement: ");
    scanf("%d %d",&n,&r);

    per=factorial(n)/factorial(r);

    printf("Arrangement is %d ",per );

    return 0;
}