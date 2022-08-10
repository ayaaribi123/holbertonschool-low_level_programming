#include "main.h"
#include <stdio.h>
#include <string.h>
/**
*print_chessboard - check the code
*
*@a: char
*Return: Always 0.
*/
void print_chessboard(char (*a)[8])
{
	int i;
	int p;

	for (i = 0; i < 8; i++)
	{
		for (p = 0; p < 8; p++)
		{
			putchar (a[i][p]);
		}
		putchar('\n');
	}
}
