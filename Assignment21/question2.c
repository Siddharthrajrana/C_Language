//2. Write a function to take input employee data from the user. [ Refer structure from
// question 1 ]
#include<stdio.h>
//declared globally
    struct Employee {
        int id;
        char name[20];
        float salary ;
    } E1;

struct Employee input();
void display( struct Employee );
int main()
{   
    struct Employee E3;
    E3=input();
    display(E3);
   
    return 0 ;
}
struct Employee input()
{
    
    printf("Enter the ID of Employee : ");
    scanf("%d",&E1.id);
    fflush(stdin);
    printf("\nEnter the Name of the Employee : ");
    gets(E1.name);
    printf("\nEnter the Salary of the Employee : ");
    scanf("%f",&E1.salary);

    return E1;
}
void display( struct Employee E2)
{
    printf("Information of the Above Employee is :\n");
    printf("%d\n",E2.id);
    printf("%s\n",E2.name);
    printf("%f\n",E2.salary);
}