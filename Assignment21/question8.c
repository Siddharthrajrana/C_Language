//8. Write a program to store information of 10 students and display them using structure
#include<stdio.h>
struct Student{
    
    int roll;
    char name[20];
};

struct Student input();


int main()
{
    
    struct Student S[10];
    for(int i=1 ; i <= 10 ; i++)
    {   
        S[i] = input(i);
    }
    printf("\n\n");
    for(int i=1 ; i <= 10 ; i++)
    {
       printf("%d   ",S[i].roll);
       printf("%s\n",S[i].name);
    }

    return 0;

    
}
struct Student input(struct Student n)
{   
    printf("\nEnter the Roll of Student : ");
    scanf("%d",&n.roll);
    fflush(stdin);
    printf("Enter the Name of the Student : ");
    fgets(n.name,20,stdin);
    
    return n;
}
