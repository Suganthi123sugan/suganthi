#include <stdio.h>

int main()
{
    int n,r,sum=0,temp;

    printf("Enter a number: ");
    scanf("%d",&n);

    temp=n;
    while(n != 0){
         r=n % 10;
         n=n / 10;
         sum=sum+(r*r*r);
    }
    if(sum==temp)
         printf("%d is an Armstrong number",temp);
    else
         printf("%d is not an Armstrong number",temp);

}
