#include <stdio.h>
#include "main.h"
/**
* print_last_digit - check the code
*@a: variable
*Return: Always 0.
*/
void jack_bauer(void)
{
int h, m;
for (m = 0; m < 60; m++)
{
for (h = 0; h < 24; h++)
{
		putchar(h / 10 +'0');
		putchar(h % 10 + '0');
		putchar(':');
		putchar(m / 10 +'0');
		putchar(m % 10 + '0'); 
		putchar('\n');
}
}
}