#include "main.h"
#include <stdio.h>
/**
*more_numbers - check the code
*
*Return: Always 0.
*/
void more_numbers(void)
{
int a;
int b;

for (a = 0; a < 10 ; a++)
{
for (b = 0 ; b < 15 ; b++)
    putchar (a + '0');
putchar ('\n');

}
}