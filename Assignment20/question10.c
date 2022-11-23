//10. Write a program to print a string in reverse using a pointer
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],*p;
    printf("Enter a string : ");
    gets(str);
    p=str;

    printf("String in Reverse is  : ");
    int length = strlen(str);
    for(int i=length-1 ; i>=0 ; i--)
    {
        printf("%c",*(p+i));
    }
    return 0;
}