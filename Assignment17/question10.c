//10. Write a program in C to Find the Frequency of Characters.
#include<stdio.h>
#include<string.h>
void main()
{
char s[100],s1[100];

printf("enter string ");
gets(s);

int count=0;

for(int i=0;s[i];i++)
{
   for(int j=0;s[j];j++)
   {
     if(s[i]==s[j])
     {
       count++;
     }
     
   }
   printf("%c frequency is = %d\n",s[i],count);
   count=0;
 
}
printf("%s",s);
}