//2. Write a program to count the occurrence of a given character in a given string.
#include<stdio.h>
#include<string.h>
void main()
{
char s[100],s1;
int c=0;
printf("enter string ");
gets(s);
printf("enter a character for frequency ");
scanf("%c",&s1);

for(int i=0;s[i];i++)
{
 if(s[i]==s1)
  c++;
}
printf("Frequency of %c  is %d",s1,c);

}