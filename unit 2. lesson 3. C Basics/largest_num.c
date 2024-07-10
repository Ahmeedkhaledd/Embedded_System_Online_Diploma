#include <stdio.h>

int main() 
{
    int num[3];
    printf("enter the nums: ");
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &num[i]);
    }
    
    if(num[0] > num[1] && num[0] > num[2])
    {
        printf("\n %d is the largest number ", num[0]);
    }
    else if (num[1] > num[0] && num[1] > num[2])
    {
          printf("\n %d is the largest number ", num[1]);

    }
    else
    {
        printf("\n %d is the largest number ", num[2]);

    }
}