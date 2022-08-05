#include "main.h"
#include <string.h>
/**
 *string_toupper - check the code
 *@s: pointer
 *Return: Always 0.
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
{
	if (s[i] >= 'a' && s[i] <= 'z')
{
		s[i] = s[i] - 32;
}
	i++;
}
return (s);
}
