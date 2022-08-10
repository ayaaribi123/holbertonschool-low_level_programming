#include "main.h"
#include <stdio.h>
#include <string.h>
/**
*_strspn - check the code
*
*@s: char
*@accept: char
*Return: Always 0.
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int p;
	int i;

	for (p = 0; *s; p++)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				break;
			}
			else if (accept[i + 1] == '\0')
			{
				return (p);
			}
		}
		s++;
	}
return (p);
}
