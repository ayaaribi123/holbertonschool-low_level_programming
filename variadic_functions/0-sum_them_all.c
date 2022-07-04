#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - check the code
 * @n: character
 * Return: 0
 */
int sum_them_all(const unsigned int n, ...)
{
	 unsigned int Sum = 0;
	 unsigned int i;
	 va_list su;
	if (n == 0)
		return (0);

	va_start(su, n);
		for (i = 0; i < n; i++)
			Sum += va_arg(su, int);
	va_end(su);
	return (Sum);
}
