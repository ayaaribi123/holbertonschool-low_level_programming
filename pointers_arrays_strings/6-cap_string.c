#include "main.h"
#include <string.h>
/**
 *cap_string - check the code
 *@s: pointer
 *Return: Always 0.
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		{
			if (s[i] >= 97 && s[i] <= 122)
			s[i] = s[i] - 32;
	}
			if (s[i] == ' ')
		{
			i++;
		}
}
return (s);
}
