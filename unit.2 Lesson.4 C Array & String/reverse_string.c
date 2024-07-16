#include<stdio.h>
#include<string.h>
int main()
{
    char str[100], temp;
    printf("Enter a string: ");
    gets(str);

    for(int i = 0; i < (strlen(str) - (strlen(str) / 2)); i++)
    {
        temp = str[i];
        str[i] = str[strlen(str) - 1 - i];
        str[strlen(str) - 1 - i] = temp;
    }
    
    printf("the reverse of the string = %s", str);
}