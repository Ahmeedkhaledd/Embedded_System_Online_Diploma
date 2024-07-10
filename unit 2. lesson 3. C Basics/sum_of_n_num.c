#include <stdio.h>

int main() 
{
    int num = 0;
    int sum = 0;
    printf("Enter the number: ");
    scanf("%d", &num);

    for(int i = 0; i <= num; i ++)
    {
        sum  = sum + i;
    }
    
    printf("the sum is %d", sum);
}
