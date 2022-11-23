//8. Write a program in C to copy one string to another string.
#include<stdio.h>
#include<string.h>
void main()
{
char s[100],s1[100];

printf("enter string ");
fgets(s,5,stdin);
int i;
for( i=0;s[i];i++)
{
 s1[i]=s[i];
}
printf("%s",s1);
}