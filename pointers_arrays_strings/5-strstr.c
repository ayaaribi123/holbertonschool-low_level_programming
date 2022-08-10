#include "main.h"
#include <stdio.h>
#include <string.h>
/**
*_strstr - check the code
*
*@haystack: char
*@needle: char
*Return: Always 0.
*/
char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
{
		return (haystack);
}
	for (i = 0; *haystack != '\0'; i++)
{
		if (haystack[i] == needle[i] && needle[i] == '\0')
{
		return (haystack);

		while
			(haystack[i] == needle[i]);
}
		haystack++;
}
return (NULL);
}
