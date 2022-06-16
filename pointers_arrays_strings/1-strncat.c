#include "main.h"
#include <stdio.h>
#include <string.h>
/**
*_strncat - check the code
*
*@src: pointer
*@dest: pointer
@n: variable
*Return: Always 0.
*/
char *_strncat(char *dest, char *src, int n)
{

	char *st;

	st = dest + strlen(dest);
	while (*src != '\0' && n--)
	*st++ = *src++;
	*st = '\0';
	return (dest);
}
