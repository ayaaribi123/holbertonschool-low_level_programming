#include "main.h"
#include <stdio.h>
/**
*main - check the code
*
*Return: Always 0.
*/
int main(void)
{
int a;
for (a = 1; a<101; a++)
{
if ((a % 3 ==0 ) && (a % 5 == 0))
{
printf("FizzBuzz");
}
else if (a % 3 == 0)
{
printf("Fizz");
}
else if (a % 5 == 0)
{
printf("buzz");
}
else 
{
printf ("%d" , a);
}
else 
{
printf(" ");
}
printf ("\n");
}
}
