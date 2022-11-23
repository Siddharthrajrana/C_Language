//10. Write a program to reverse a given number
#include<stdio.h>
int main(){
    int n,rem,reversed=0;

    printf("Enter a number ");
    scanf("%d",&n);

    if (n>0)
    {
      while (n!=0)
      {
        rem=n%10;
        reversed=reversed*10+rem;
        n/=10;
      }
      
      printf("Reversed number is %d",reversed);
        
    }
    else
    printf("Number cannot be reversed ");
    return 0;
    
}