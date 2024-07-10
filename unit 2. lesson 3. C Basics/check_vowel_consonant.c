#include <stdio.h>

int main() 
{
    char c;
    printf("enter the char: ");
    scanf("%c", &c);
    char upp = toupper(c);

    if( upp == 'A' || upp == 'E' || upp == 'I' || upp == 'O' || upp == 'U')
    {
        printf("the char is vowel\n");
    }
    else 
    {
        printf("the char is consonant");
    }
}
