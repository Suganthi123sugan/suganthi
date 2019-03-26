#include <stdio.h>

int main()
{
    int base,ex;
    long long power=1;
    int i;
    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &ex);
    for(i=1; i<=ex; i++)
    {
        power = power * base;
    }
    printf("%d ^ %d = %lld", base, ex, power);
}
