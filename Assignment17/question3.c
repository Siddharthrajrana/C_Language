//3. Write a program to count vowels in a given string
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
 if(s[i]=='a'||s[i]=='e'||s[i]=='o'||s[i]=='i'||s[i]=='u')
  c++;
}
printf("Number of vowels in %s is %d",s,c);

}