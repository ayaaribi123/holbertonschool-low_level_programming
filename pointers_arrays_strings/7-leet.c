#include "main.h"
#include <string.h>
/**
 *leet - check the code
 *@s: pointer
 *Return: Always 0.
 */
char *leet(char *s)
{
	int i;
	int a[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int num[] = {'4', '3', '0', '7', '1'};

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == a[i])
		s[i] = num[i];
	}
	return (s);
}
