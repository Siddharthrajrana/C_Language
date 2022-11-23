//6. Write a program to calculate the length of the string using a pointer
#include<stdio.h>
#include<string.h>

int main()
{
    char str[100],*p ;
    int count = 0;
    printf("Enter a String : ");
    gets(str);
    p = str;

    for(int i=0 ; *(p+i) ; i++)
    {
        if(*(p+i)==' ');
        else 
        count ++;

    }
    printf("Length of String is %d",count);
}