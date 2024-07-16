#include<stdio.h>
int main ()
{
    int row , col;
    printf("the num of row: ");
    scanf("%d", &row);

    printf("the num of col: ");
    scanf("%d", &col);
    
    int arr[row][col], trans[col][row];
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            printf("Enter the item (%d, %d) :",i,j);
            scanf("%d", &arr[i][j]);
        }

    }
    printf("The matrix is: \n");

    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            printf(" %d\t ", arr[i][j]);
        }
        printf("\n");

    }

    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            trans[j][i] = arr[i][j];
        }

    }
    

    printf("The transpose matrix is: \n");

    for(int i = 0; i < col; i++)
    {
        for(int j = 0; j < row; j++)
        {
            printf(" %d\t ", trans[i][j]);
        }
        printf("\n");

    }


    
}