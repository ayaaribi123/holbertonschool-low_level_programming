#include "main.h"
#include <stdio.h>
#include <string.h>
/**
*_strpbrk - check the code
*
*@s: char
*@accept: char
*Return: Always 0.
*/
char *_strpbrk(char *s, char *accept)
{
	int i;

	for (i = 0; *s != '\0'; s++)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
	}
	return ('\0');
}
