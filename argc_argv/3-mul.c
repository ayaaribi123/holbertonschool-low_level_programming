#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the name of the file
 * @argc: count of args
 * @argv: array of args
 * Return: 0
 */

int main(int argc, char **argv)
{
	int a, b;

	a = atoi(argv[1]);
	b = atoi(argv[2]);

	{

		if (argc < 3)
	{
			printf("error");
			return (1);
	}
		else
	{
			printf("%d\n", a * b);

	}
	return (0);
	}
	}

