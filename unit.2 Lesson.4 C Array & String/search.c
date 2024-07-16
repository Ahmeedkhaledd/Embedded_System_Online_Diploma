#include<stdio.h>
int main()
{
    int n, in;
    printf("Enter no of elements: ");
    scanf("%d", &n);
    int elem[n];

    for (int i = 0; i < n; i++)
    {
        printf("enter the element: ");
        scanf("%d", &elem[i]);
    }
    
    printf("Enter the element to be searched: ");
    scanf("%d", &in);

    for (int i = 0; i < n; i++)
    {
        if(elem[i] == in)
        {
            printf("number found at the location %d", i+1);
        }
        
        
    }


}