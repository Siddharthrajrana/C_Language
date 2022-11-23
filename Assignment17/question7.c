//7. Write a program in C to count the total number of alphabets, digits and special characters in a string.
#include<stdio.h>
#include<string.h>
void main()
{
char s[100],s1;
int A=0,N=0,SC=0;
printf("enter string ");
gets(s);

for(int i=0;s[i];i++)
{
 if((s[i]>=65)&&(s[i]<=90)||(s[i]>=97)&&(s[i]<=122))
  A++;
  else if ((s[i]>=48)&&(s[i]<=57))
  N++;
  else
  SC++;
}
printf("Number of Alphabets is %d \n",A);
printf("Number of Digits is %d \n",N);
printf("Number of Special Character is %d \n",SC);

}