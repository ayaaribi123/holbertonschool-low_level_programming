#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 *print_numbers - check the code
 *@separator: character
 *@n: character
 *Return: 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	unsigned int p;
	va_list num;

	 va_start(num, n);

	for (i = 0; i < n; i++)
	{
		p = va_arg(num, int);
		printf("%d", p);
	if (separator == NULL)
	printf("\n");

	}
	printf("\n");
	va_end(num);
}
