#include "main.h"
#include <stdio.h>
#include <string.h>
/**
*_strncpy - check the code
*
*@src: pointer
*@dest: pointer
*@n: pointer
*Return: Always 0.
*/
char *_strncpy(char *dest, char *src, int n)
{
	char *c = dest;
	int i = 0;

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

while (*src != '\0' && n--)
{
*dest = *src;
dest++;
src++;
}
return (c);
}
