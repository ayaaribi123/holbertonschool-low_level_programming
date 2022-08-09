#include "main.h"
#include <stdio.h>
#include <string.h>
/**
*_memcpy - check the code
*
*@dest: char
*@src: char
*@n: unsigned int
*Return: Always 0.
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		dest[i] = src[i];
	}
return (dest);
}