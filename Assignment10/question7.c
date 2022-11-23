//7. Write a function to calculate the number of combinations
// one can make from n items and r selected at a time. (TSRS)
#include<stdio.h>
int facTorial(int n){
    int fact=1; 
    for (int i = 1; i <= n; i++)
    {
       fact*=i;
    }
    return fact;
}
int main(){
    int n,r,com;
    printf("Enter n and r value of combination: ");
    scanf("%d %d",&n,&r);

    com=facTorial(n)/(facTorial(n-r)*facTorial(r));

    printf("Value of Combination is %d",com);

    return 0;
}