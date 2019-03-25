#include <stdio.h>

int main()
{
    int a;
    printf("enter the year:");
    scanf("%d",&a);
    if (a%4==0)
    {
        printf("this year is leap year");
    }
    else
    {
    printf("this year not leap year");
    }
    
}
