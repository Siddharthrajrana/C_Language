// 10. Write a function to print all prime factors of a given number. For example,
// if the number is 36 then your result should be 2, 2, 3, 3. (TSRN)
#include <stdio.h>
void primeFactor(int n)
{
    int factr, i, x;
    while (n != 0)
    {
        i = 2;
        while (1)
        {

            if (n % i == 0)
            {
                printf("%d ", i);
                n = n / i;
                i++;
            }
        }
    }
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    primeFactor(num);

    return 0;
}