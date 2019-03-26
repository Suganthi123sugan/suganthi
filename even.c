#include <stdio.h>

int main()
{
   int  m;
   printf("Print all even numbers till: ");
   scanf("%d", &m);
   printf("All even numbers from 1 to %d are: \n", m);
   int i=1;
    while(i<=m)
    {
        if(i%2==0)
        {
            printf("%d\t", i);
        }

        i++;
    }

}
