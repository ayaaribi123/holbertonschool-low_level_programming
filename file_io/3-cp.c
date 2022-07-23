#include "main.h"
char *b_buffer(char *file);
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
	c = b_buffer(argv[2]);
	r = read(f, c, 1024);
	t = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {

	if (r == -1 || f == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %sn", argv[1]);
		free(c);
		exit(98);
	}
	w = write(t, c, r);
	if (t == -1 || w == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		free(c);
		exit(99);
	}
	r = read(f, c, 1024);
	t = open(argv[2], O_WRONLY | O_APPEND, 1024);
	}
	while (r > 0);
	{
	if (f == -1 || t == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f);
		exit(100);
	}
	free(c);
	close(t);
	close(f);
	return (0);
}
}

/**
*b_buffer - a function copies the content of a file to another file.
*@file: variable
*Return: Always 0
 */
char *b_buffer(char *file)
{
	char *c;

	c = malloc(sizeof(char) * 1024);

	if (c == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	return (c);
}
