//12. Write a program to check whether a given alphabet is in uppercase or lowercase.
#include<stdio.h>
int main(){ 
    
    char letter;
    printf("Enter an alphabet ");
    scanf("%c",&letter);

    if ('a'<=letter & 'z'>= letter)
        printf("Alphabet is in Lower Case");
    else if ('A'<=letter & 'Z'>=letter)
        printf("Alphabet is in Upper Case");
    else 
    printf("Special Character");
     
    
        
    printf("\n");
   return 0;
    

}