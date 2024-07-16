#include<stdio.h>
int main ()
{
    int arr[3][3], temp;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("Enter the item (%d, %d) :",i,j);
            scanf("%d", &arr[i][j]);
        }

    }
    printf("The matrix is: \n");

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf(" %d\t ", arr[i][j]);
        }
        printf("\n");

    }

    for(int i = 0; i <= 0; i++)
    {
        for(int j = 1; j <= 2; j++)
        {
            temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }

    }
            temp = arr[1][2];
            arr[1][2] = arr[2][1];
            arr[2][1] = temp;
    

    printf("The transpose matrix is: \n");

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf(" %d\t ", arr[i][j]);
        }
        printf("\n");

    }


    
}