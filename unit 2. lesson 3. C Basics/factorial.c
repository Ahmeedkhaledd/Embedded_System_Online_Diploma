#include<stdio.h>
int main()
{
    int n = 0;
    int fact = 1;

    do
    {
        printf("enter the num: ");
        scanf("%d", &n);
    }while(n < 0);
    
    if(n == 0)
    {
        printf("factorial = 1");
    }
    
    else
    {
        for(int i= 1; i <= n; i++)
        {
            fact = fact * i;
        }
    }
    printf("fact = %d", fact);
}