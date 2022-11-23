//2. Write a function to swap strings of two char arrays of calling functions. (TSRS)
#include<stdio.h>
#include<string.h>
char swapArr(char *,char *);
void main()
{
    char s1[100],s2[100];
    printf("Enter two strings \n");
    fgets(s1,20,stdin);
    fgets(s2,20,stdin);

    swapArr( s1, s2);
    printf("Strings after swapping is \n");
    puts(s1);
    puts(s2);

}
char swapArr(char *s1 , char *s2)
{
    char temp[100];
    for(int i=0 ; s2[i] || s1[i]; i++)
    {
        temp[i]=s1[i];
        s1[i]=s2[i];
        s2[i]=temp[i];
    }
    return (*s1 , *s2);
    
}
