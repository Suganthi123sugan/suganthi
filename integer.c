#include <stdio.h>

int main()
{
    
    long long a;
    int count=0;
    printf("enter the integer");
    scanf("%lld",&a);
    while(a != 0)
    {
        a /=10;
        ++count;
    }
    printf("number of degit:%d",count);
}
