#include "main.h"
/**
*append_text_to_file - a function that appends text at the end of file.
*@filename: variable
*@text_content: variable
*Return: Always 0.
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w;
	int en = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
		en = strlen(text_content);

o = open(filename, O_APPEND | O_WRONLY);

	if (o == -1)
{
	return (-1);
}
w = write(o, text_content, en);

	if (w == -1)
	{
		return (-1);
	}
close(o);
return (1);
}
