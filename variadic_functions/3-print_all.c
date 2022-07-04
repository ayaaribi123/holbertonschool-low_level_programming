#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 *print_char - check the code
 *@str: character
 *Return: 0
 */
void print_char(va_list str)
{
	char c;

	c = va_arg(str, int);
	printf ("%c" , c);
}

/**
 *print_int - check the code
 *@num: character
 *Return: 0
 */
void print_int(va_list num)
{
	int i;

	i = va_arg(num, int);
	printf ("%d" , i);
}

/**
 *print_float - check the code
 *@fl: character
 *Return: 0
 */
void print_float(va_list fl)
{
	float f;

	f = va_arg(fl, int);
	printf ("%f" , f);
}

/**
 *print_string - check the code
 *@st: character
 *Return: 0
 */
void print_string(va_list st)
{
	char *s;

	s = va_arg(st, char*);
	if (s == NULL)
	{
		printf("(nil)");
	}
	printf ("%s" , s);
}

/**
 *print_all - check the code
 *@format: character
 *Return: 0
 */
void print_all(const char * const format, ...)
{
	va_list fu;
	int i;
	int f;
	
	printf(print_char, print_int, print_float, print_string);

	va_start(fu, format);
	i = 0;
		while (i < format[i]);
		{
			i++;
		}
			f= va_arg(fu, int);
	printf("\n");
	va_end(fu);
}
