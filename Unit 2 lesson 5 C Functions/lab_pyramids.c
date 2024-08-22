#include<stdio.h>
void function(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    
}

int main()
{
    function(10);
}