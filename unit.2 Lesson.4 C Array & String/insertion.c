#include<stdio.h>
int main()
{
    int n, in, loc;
    printf("Enter no of elements: ");
    scanf("%d", &n);
    int elem[n];

    for (int i = 0; i < n; i++)
    {
        printf("enter the element: ");
        scanf("%d", &elem[i]);
    }
    
    printf("Enter the element to be inserted: ");
    scanf("%d", &in);
    
    printf("Enter the location from 1 to n: ");
    scanf("%d", &loc);

    for (int i = 1; i <= n; i++)
    {
        if(i == loc)
        {
            elem[i - 1] = in;
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", elem[i]);
        
    }
    //

}