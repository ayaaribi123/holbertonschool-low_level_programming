#include <stdio.h>
#include "main.h"
/**
*times_table - check the code
*Return: Always 0.
*/
void times_table(void)
{
	int n, l, p;

	for (n = 0; n <= 9; l++)
	{
		putchar(',');
		putchar(' ');

		p = n * l;
		if (p <= 9)
		{
			putchar(' ');
		}
		else
		{
			putchar((p / 10) + '0');
			putchar((p % 10) + '0');
		}
	}
	putchar ('\n');
}
