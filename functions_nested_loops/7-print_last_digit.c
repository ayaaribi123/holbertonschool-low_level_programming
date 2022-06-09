#include "main.h"
/**
* print_last_digit - check the code
*@a: variable
*Return: Always 0.
*/
int print_last_digit(int a)
{
int n;
a = n % 10;
if (a % 10)
a *= -1;

_putchar (a + '0');
    return (a);
 }
