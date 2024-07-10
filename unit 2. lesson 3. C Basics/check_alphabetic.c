#include <stdio.h>

int main() 
{
    char c;
    printf("Enter the character ");
    scanf("%c", &c);

    if (c >= 'A' && c <= 'z')
    {
        printf("%c is alphabetic",c);
    }
    else
    {
        printf("%c is not an alphabetic", c);
    }
}
