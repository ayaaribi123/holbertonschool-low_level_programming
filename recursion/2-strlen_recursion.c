#include "main.h"
#include <string.h>

/**
*_strlen_recursion - check the code
*@s: pointer
*Return: Always 0.
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
{
	return (0);
}
	else
{
		s++;
	return (_strlen_recursion(s) + 1);
}
}
