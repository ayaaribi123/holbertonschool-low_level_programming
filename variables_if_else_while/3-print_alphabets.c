#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int  main(void)
{

	char al;
	char un;

for (al = 'a'; al <= 'z'; al++)
{
	putchar(al);
}
for (un = 'A'; un <= 'Z'; un++)
{
	putchar(un);
}
putchar('\n');
return (0);
}
