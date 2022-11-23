//7. Write a program to count the number of vowels and consonants in a string using a pointer
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100], *p;
    int vol = 0 , consonant = 0;

    printf("Enter a String : ");
    gets(str);
    p = str;

    for(int i=0 ; *(p+i) ; i++)
    {
        if(*(p+i)=='a'||*(p+i)=='e'||*(p+i)=='i'||*(p+i)=='o'||*(p+i)=='u'||*(p+i)=='A'||*(p+i)=='E'||*(p+i)=='I'||*(p+i)=='O'||*(p+i)=='U')
        vol++;
        else if(*(p+i)==' ');
        else
        consonant++;
    }
    printf("Total Vowels are : %d\n",vol);
    printf("Total Consonants are : %d \n",consonant);


   return 0;
}
