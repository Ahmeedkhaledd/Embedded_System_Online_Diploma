#include <stdio.h>

int main() 
{
   char symp;
   float calc = 0;
   float num[2];
   printf("enter the operator either + or - or * or /: ");
   scanf("%c", &symp);

   for(int i = 0; i < 2; i++ )
   {
        printf("enter the  numbers: ");
        scanf("%f", &num[i]);
   }

   switch(symp)
   {
        case '+':
        calc = num[0] + num[1];
        break;

        case '-':
        calc = num[0] - num[1];
        break;

        case '*':
        calc = num[0] * num[1];
        break;

        case '/':
        calc = num[0] / num[1]; 
        break;
   }
   printf("%f %c %f = %f", num[0], symp, num[1], calc);
}
