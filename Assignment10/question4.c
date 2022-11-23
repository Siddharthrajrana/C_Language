//4. Write a function to print first N natural numbers (TSRN)
#include<stdio.h>
int main(){
    
    void natNum(int );
    int n;
    printf("Enter the Nth term of natural number ");
    scanf("%d",&n);
    
    natNum(n);

    return 0;
}
void natNum(int a){
    for (int  i = 1; i <= a; ++i)
    {
       printf("%d ",i );
    }
    
}