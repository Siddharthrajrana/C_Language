//4. Write a program in C to demonstrate how to handle the pointers in the program.
#include<stdio.h>
void main()
{
    int var , *ptr ;

    printf("The garbage value contained in ptr is %d \n",ptr);
    printf("The address of ptr is %d \n", &ptr);
    printf("The address of var is %d \n\n",&var);

    ptr = &var;
    printf("The ptr contain the address of var in heax %p \n ", ptr );
    printf("The address of var in hexa small is %x \n",ptr);
    printf("The address of var in decimal form is %d \n\n",var );

    var=10;
    printf("The updsted vlue of var is %d \n",var);
    *ptr=20;
    printf("The changed value of var using pointer is %d",var);

}