#include "main.h"
#include <stdio.h>
#include <string.h>
/**
*_strchr - check the code
*
*@s: char
*@c: char
*Return: Always 0.
*/
char *_strchr(char *s, char c)
{
	int i;
	int st = strlen(s);

	for (i = 0; i <= st; i++)
	{
	if (s[i] == 0)
	{
		return (s + i);
	}
	if (s[i] == c)
	{
		return (s + i);
	}
	}
return ('\0');
}
