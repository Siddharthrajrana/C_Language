//5. Write a program to convert a given string into lowercase
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
 if((s[i]>=65)&&(s[i]<=91))
  s[i]=s[i]+32;
}
puts(s);

}