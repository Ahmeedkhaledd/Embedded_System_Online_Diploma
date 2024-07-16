#include<stdio.h>
int main()
{
    int n;
    printf("Enter the numbers of data: ");
    scanf("%d", &n);
    float num[n];
    float sum = 0;
        
    for (int i = 0; i < n; i++)
    {
        printf("Enter number: ");
        scanf("%f", &num[i]);
        sum = sum + num[i];
    }
    
    float average = sum / n;
    printf("Average = %.2f", average);

}