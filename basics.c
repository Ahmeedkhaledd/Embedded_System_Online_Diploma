#include <stdio.h>

int main() 
{
   int n = 0;
   for (int i = 0; i < 10; i++)
   {
        for(int j = n; j < 10; j++)
        {
            printf("%d", j);
        }
        printf("\n");
        n++;
   }
}
