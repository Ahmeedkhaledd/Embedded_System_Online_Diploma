#include<stdio.h>
int main()
{
    int a,b,temp;
    
    printf("enter the first num: ");
    scanf("%d", &a);

    printf("enter the second num: ");
    scanf("%d", &b);

    a = a + b;//a = 3 , b = 2
    b = a - b;//b = 1, a = 3
    a = a - b; //a = 2 b = 1

    printf("After swapping, value of a = %d\n", a);
    printf("After swapping, value of b = %d\n", b);

}