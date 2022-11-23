//9. Write a program to store information of n students and display them using structure
#include<stdio.h>
struct Student{
    int roll;
    char name[20];
};
struct Student input();
struct Student display();
int main()
{   
    int n;
    
    printf("Enter the Number of Students you want to enter : ");
    scanf("%d",&n);
    printf("\n");
    
    struct Student b[n];
    input(b,n);
    display(b,n);
    

    return 0;

}
struct Student input(struct Student s[],int size)
{    
    
    for(int i=1;i<=size;i++)
    {
    printf("Enter the Roll Number of Student : ");
    scanf("%d",&s[i].roll);
    fflush(stdin);
    printf("Enter the Name of Student : ");
    fgets(s[i].name,20,stdin);
   
    printf("\n\n");
    }
}
struct Student display(struct Student b[],int size)
{
    for(int i=1 ; i<=size ; i++)
    {
        printf("The Details of %d Student is as follows \n",i);
        printf("Roll is : %d \n",b[i].roll);
        printf("Name is : %s \n\n",b[i].name);

    }
}
