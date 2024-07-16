#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i = 0;
    printf("Enter a string: ");
    gets(str);

    while(str[i])
    {
        i++;
    }
    
    printf("the length of the string = %d", i);
}