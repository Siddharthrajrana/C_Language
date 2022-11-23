//6. Write a program to reverse a string.
#include<stdio.h>
#include<string.h>
void main()
{
char s[100];
int l=0;
printf("enter string ");
gets(s);
l=strlen(s);


for(int i=l;i>=0;i--)
{
 printf("%c",s[i]);
}


}