#include <stdio.h>

int main()
{
    int a;
    unsigned long long factorial = 1;

    printf("enter the number");
    scanf("%d",&a);
    if (a < 0)
        printf("Error! Factorial of a negative number doesn't exist.");

    else
    {
        for(int i=1; i<=a; ++i)
        {
             factorial *= i;              
        }
        printf("Factorial of %d = %llu", a, factorial);
    }

}


