#include <stdio.h>

int main()
{
        int  n;
    int a[100], temp;
    printf("Enter total number of elements(1 to 100): ");
    scanf("%d", &n);
    printf("\n");
    for(int i = 0; i < n; ++i)
    {
       printf("Enter Number %d: ", i+1);
       scanf("%d", &a[i]);
    }
    for(int i = 1; i < n; ++i)
    {
       if(a[0] < a[i]) 
       {
           temp = a[0];
           a[0] = a[i];
           a[i] = temp;
       }
          
    }
    printf("Largest element = %.d", a[0]);
    return 0;

}
