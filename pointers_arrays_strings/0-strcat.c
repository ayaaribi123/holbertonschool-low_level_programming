#include "main.h"
#include <stdio.h>
#include <string.h>
/**
*puts2 - check the code
*
*@src: pointer
*@dest: pointer
*Return: Always 0.
*/
char *_strcat(char *dest, char *src)
{
	char *st;

	st = dest + strlen(dest);
	while (*src != '\0')
	*st++ = *src++;
	*st = '\0';
	return (dest);
}
