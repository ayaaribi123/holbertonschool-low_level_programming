#include "main.h"
/**
*main - a function copies the content of a file to another file.
*@argc: variable
*@argv: variable
*Return: Always 0.
*/
int main(int argc, char **argv)
{
	int f, t, r, w;
	char *c;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	f = open(argv[1], O_RDONLY);
	if (f == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	c = argv[2];
	r = read(f, c, 1024);
	t = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (t == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %sn", argv[1]);
		exit(98);
	}
	w = write(t, c, r);
	if (f == -1 || w == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	if (f == -1 || t == -1)
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f);
	exit(100);
	return (0);
}
