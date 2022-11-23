#include<stdio.h>
int main(){
   //Q.7. Program to find position of 1 in LSB
    int x, count;

    printf("Enter a number:");
    scanf("%d",&x);

    while (x==1)
    {
        count<<1;
        count++;
    }
    printf("The position of LSB is %d", count);
    


return 0;

}