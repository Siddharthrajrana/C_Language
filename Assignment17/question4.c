//4. Write a program to convert a given string into uppercase
#include<stdio.h>
#include<string.h>
void main()
{
char s[100],s1;
int c=0;
printf("enter string ");
gets(s);

for(int i=0;s[i];i++)
{
 if((s[i]>=97)&&(s[i]<=122))
  s[i]=s[i]-32;
}
puts(s);

}