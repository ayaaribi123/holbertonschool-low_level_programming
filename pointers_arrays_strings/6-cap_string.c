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
		if (i == 0)
		{
			if ((s[i] >= 'A' && s[i] <= 'Z'))
			s[i] = s[i] - 32;
			continue;
	}
			if (s[i] == ' ')
		{
			++i;
			if (s[i] >= 'A' && s[i] <= 'Z')
			{
				s[i] = s[i] - 32;
				continue;
			}
			}
		else
		{
			if (s[i] >= 'A' && s[i] <= 'Z')
				s[i] = s[i] + 32;
		}
}
return (s);
}
