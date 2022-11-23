//4. Write a recursive function to print first N odd natural numbers in reverse order
#include<stdio.h>
int printOddRev(int);
int main()
{
    int num ;

    printf("Enter the number of odd you want: ");
    scanf("%d",&num);
    
    printf("%d odd number in reverse order are as follows: \n", num);
    printOddRev(num);

    return 0;

}
int printOddRev(int n)
{
    if(n==0)
    return 1;

    printf("%d ",(2*n-1));
    printOddRev(n-1);
}