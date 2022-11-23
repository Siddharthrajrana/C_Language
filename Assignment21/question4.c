//4. Write a function to find the highest salary employee from a given array of 10
//employees. [ Refer structure from question 1]
#include<stdio.h>
struct Employee{
    
    int id;
    char name[20];
    float salary;
};

struct Employee input();
float sortBySalary();

int main()
{
    struct Employee E[10];
    input(E,10);
    float max = sortBySalary(E,10);
    printf("Maximum salary is %f ",max);

    return 0;

    
}
struct Employee input(struct Employee n[])
{   
    for(int i=1 ;i<=10 ; i++)
    {
    printf("\nEnter the ID of Employee : ");
    scanf("%d",&n[i].id);
    fflush(stdin);
    printf("Enter the Name of the Employee : ");
    fgets(n[i].name,20,stdin);
    printf("Enter the Salary : ");
    scanf("%f",&n[i].salary);
    }

}
float sortBySalary(struct Employee n[])
{    
    float maxSalary=n[1].salary;

    for(int i=1 ;i<=10 ; i++)
    {
       if(maxSalary<n[i].salary) 
         maxSalary=n[i].salary;
    }
   return maxSalary;
}