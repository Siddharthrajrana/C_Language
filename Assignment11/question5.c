//5. Write a function to print first N prime numbers (TSRN)
#include<stdio.h>
void printPrime(int n)
{
    int i=1,j;
    while(n)
    {    
        
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
            break;
        }
        if(j-1==i/2)
        {
            printf("%d ",i);
            n--;
        }
        i++;
    }
    
}
int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d",&num);
     
    printPrime(num);

    return 0;

}
