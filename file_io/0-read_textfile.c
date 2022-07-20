#include "main.h"
/**
* read_textfile - a fuction that reads a text file and prints it to the POSIX standard output.
*@filename: variable
*@letters: variable
* Return: Always 0.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *t;

	if (filename == NULL)
{
		return (0);
}

	t = malloc(letters);

	if (t == NULL)
{
		return (0);
}
	o = open(filename, O_RDONLY);
	if (o == -1)
{
		free(t);
		return (0);
}
	r = read(o, t, letters);
	if (r == -1)
{
		free(t);
		return (0);
}
	w = write(STDOUT_FILENO, t, r);
	if (w == -1)
{
		free(t);
		return (0);
}
free(t);
close(o);
return (w);
}
