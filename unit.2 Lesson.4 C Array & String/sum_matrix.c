#include<stdio.h>
int main()
{
    int a[2][2], b[2][2], sum[2][2];
    printf("Enter the elements of the first matrix\n");
    
    for (int i = 1; i <= 2; i++)
    {
        for(int j = 1; j <= 2; j++)
        {
            printf("Enter a%d%d: ", i, j);
            scanf("%d",&a[i -1][j - 1]);

        }
    }
    
    printf("Enter the elements of the second matrix\n");
    
    for (int i = 1; i <= 2; i++)
    {
        for(int j = 1; j <= 2; j++)
        {
            printf("Enter b%d%d: ", i, j);
            scanf("%d",&b[i - 1][j - 1]);

        }
    }

    
    printf("sum of matrix: \n");
    for (int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];

        }
    }
    
    for (int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            printf("%d\t", sum[i][j]);

        }
        printf("\n");
    }



}