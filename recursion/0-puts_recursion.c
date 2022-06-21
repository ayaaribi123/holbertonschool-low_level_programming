#include "main.h"

/**
*_puts_recursion - check the code
*@s: pointer
*Return: Always 0.
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
}