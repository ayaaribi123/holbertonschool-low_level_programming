#include "main.h"
/**
 * print_alphabet_x10 - check the code
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
int c;
int b;
for (c = 1 ; c <= 10 ; c++)
{
for (b = 'a' ; b <= 'z' ; b++)
_putchar(b);
_putchar('\n');
}
}
