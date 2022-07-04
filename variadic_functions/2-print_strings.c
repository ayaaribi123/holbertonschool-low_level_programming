#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 *print_strings - check the code
 *@separator: character
 *@n: character
 *Return: 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list num;

	 va_start(num, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(num, char*);

	if (s == NULL)
	printf("%s", "(nil)");
	else
		printf("%s", s);
	if ((separator != NULL) &&(i != (n - 1)))
	printf("%s", separator);

	}
	printf("\n");
	va_end(num);
}
