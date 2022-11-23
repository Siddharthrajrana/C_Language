//1. Write a program to calculate the length of the string. (without using built-in method)
#include<stdio.h>
#include<string.h>
void main()
{
char s[100];
int c=0,i,l=0;
printf("enter string ");
gets(s);
l=strlen(s);
for(i=0;s[i]!='\0';i++)
{
c++;
}
printf("Length of string is %d",c);
printf("length= %d",l);
}