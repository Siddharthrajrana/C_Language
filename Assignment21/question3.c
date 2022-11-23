//3. Write a function to display employee data. [ Refer structure from question 1 ]
#include<stdio.h>
struct Employee {
    int id;
    char name[20];
    float salary;
}E1;

struct Employee input();
void display(struct Employee );

int main()
{   
   struct Employee E;
   E = input();
   printf("The Details of the Employee is :\n ");
   display(E);

   return 0;
}
struct Employee input(struct Employee E1)
{
    printf("\nEnter the Employee ID :");
    scanf("%d",&E1.id);
    fflush(stdin);
    printf("\nEnter the Name of Employee : ");
    fgets(E1.name,20,stdin);
    printf("\nEnter the Salary of Employee : ");
    scanf("%f",&E1.salary);

    return E1;

}
void display(struct Employee e)
{
    printf("%d\n",e.id);
    printf("%s\n",e.name);
    printf("%f\n",e.salary);

}