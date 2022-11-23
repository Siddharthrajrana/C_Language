//16. Write a program to check whether a given character is an alphabet (uppercase), an alphabet (lower case), a digit or a special character
#include<stdio.h>
int main(){ 
    
    char letter;
    printf("Enter a Character ");
    scanf("%c",&letter);

    if (97<=letter & 122>= letter)
        printf("Alphabet is in Lower Case");
    else if (65<=letter & 91>=letter)
        printf("Alphabet is in Upper Case");
    else if ('0'<=letter & '9'>=letter)
        printf("It is a Digit");

    else 
    printf("Special Character");
     
    
        
    printf("\n");
   return 0;
    

}