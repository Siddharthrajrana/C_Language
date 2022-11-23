//1. Define a structure Employee with member variables id, name, salary
#include<stdio.h>
#include<string.h>
int main()
{   
    //declare structure
    struct Employee {
        int id;
        char name[40];
        float salary;
    };
    
    //1st way to put input 
    struct Employee E1 ={ 1 , "Shimran" , 40000.00};
    printf("%d %s %f\n\n",E1.id,E1.name,E1.salary);

    //2nd way to put input
    struct Employee E2;
    E2.id = 2 ;
    // this is wrong // E2.name = 'Ramacharan';
    strcpy(E2.name,"Ramacharan");
    E2.salary = 42500.00;
    printf("%d %s %f\n\n",E2.id,E2.name,E2.salary);

    //way to get input from the user in structure
    struct Employee E3;
    printf("Enter Employee id , name , salary : \n\n");
    scanf("%d",&E3.id);
    fflush(stdin);
    fgets(E3.name,20,stdin);
    scanf("%f",&E3.salary);

    printf("%d %s %f",E3.id,E3.name,E3.salary);

}