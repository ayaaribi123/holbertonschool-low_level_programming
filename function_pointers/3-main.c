#include "3-calc.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 *main- check the code
 *@argc: character
 *@argv: character
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int (*op)(int, int);
	int result;

	if (argc != 4)
	{
		printf("error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op = get_op_func(argv[2]);
	if (op == NULL)
	{
		printf("error\n");
		exit(99);
	}
	if ((*argv[2] == '/' && num2 == 0) || (*argv[2] == '%' && num2 == 0))
	{
		printf("error\n");
		exit(100);
	}
	result = op(num1, num2);
	printf ("%d\n", result);
	return (0);
}
