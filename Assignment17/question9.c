//9. Write a C program to sort a string array in ascending order.
#include<stdio.h>
#include<string.h>
void main()
{
char s[100],s1[100];

printf("enter string ");
gets(s);

char temp;

for(int i=0;s[i];i++)
{
   for(int j=i+1;s[j];j++)
   {
     if(s[i]>s[j])
     {
       temp=s[i];
       s[i]=s[j];
       s[j]=temp;
     }
     
   }
 
}
printf("%s",s);
}