//6. Write a function to sort employees according to their names [refer structure from
//question 1]
#include<stdio.h>
#include<string.h>

struct Employee{
    int id;
    char name[20];
    float salary;
};
struct Employee inputData();
struct Employee sortBySalary();
void displaySorted();
int main()
{
    int size;
    printf("\n\nEnter the number of Employee whose data you want to store : ");
    scanf("%d",&size);
    
    struct Employee E[size];
    // function call to input data
    inputData(E,size);
    sortBySalary(E,size);
    displaySorted(E,size);

   return 0;
}
struct Employee inputData(struct Employee E[],int n)
{
    for(int i=1 ; i<=n ; i++)
    {
        printf("\nEnter the employee ID : ");
        scanf("%d",&E[i].id);
        fflush(stdin);
        printf("Enter Employee Name : ");
        fgets(E[i].name,20,stdin);
        printf("Enter the Salary of the Employee : ");
        scanf("%f",&E[i].salary);
        
    }
    printf("\n");
}
struct Employee sortBySalary(struct Employee E[],int n)
{
    for(int i=1 ; i<=n ; i++)
    {   
        float temp,tempid;
        char tempcar[20];


        for(int j=(i+1) ; j<=n ;j++)
        {
            if(E[i].name>E[j].name)
            {
            temp=E[i].salary;
            E[i].salary=E[j].salary;
            E[j].salary=temp;

            tempid=E[i].id;
            E[i].id=E[j].id;
            E[j].id=tempid;

            strcpy(tempcar,E[i].name);
            strcpy(E[i].name,E[j].name);
            strcpy(E[j].name,tempcar);
            }

        }
    }
}
void displaySorted(struct Employee E[],int n)
{
    for(int i=1 ; i<=n ; i++)
    {
        printf("ID : %d   ---> ",E[i].id);
        printf("Name %s   ---> ",E[i].name);
        printf("Salary %f   .",E[i].salary);
        printf("\n\n");
    }
}