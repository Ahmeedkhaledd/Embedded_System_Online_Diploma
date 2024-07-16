#include<stdio.h>
#include<string.h>
int main()
{
    char str[100], a;
    int sum = 0;
    printf("Enter a string: ");
    gets(str);

    printf("Enter a character to find frequency: ");
    scanf("%c", &a);

    for(int i = 0; i < strlen(str); i++)
    {
        if(str[i] == a)
        {
            sum = sum + 1;
        }
    }
    printf("Frequency of %c = %d", a, sum);
}