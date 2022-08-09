#include "main.h"
#include <stdio.h>
#include <string.h>
/**
*_memset - check the code
*
*@s: char
*@b: char
*@n: unsigned int
*Return: Always 0.
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		s[i] = b;
	}
return (s);
}
