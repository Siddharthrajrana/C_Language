//3. Write a function to check whether a given number is even or odd. 
//Return 1 if the number is even, otherwise return 0. (TSRS)
#include<stdio.h>
int main(){
    int evenOdd(int);
    int num;

    printf("Enter a number: ");
    scanf("%d",&num);
    if (evenOdd(num))
    {
        printf("Number is even ");
    }
    else 
        printf("Number is Odd ");

    return 0;

}
int evenOdd(int x){
    if (x%2==0)
    {
        return 1;
    }
    else 
        return 0;
}