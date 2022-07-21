#include "main.h"
/**
* append_text_to_file - a function that appends text at the end of file.
*@filename: variable
*@text_content: variable
* Return: Always 0.
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w;
	int en = 0;

	if (filename == NULL)
	return (-1);
	
	if (text_content != NULL)
{
		en = (text_content [en]);
}

o = open(filename, O_TRUNC | O_CREAT | O_WRONLY, 0600);

	if (o == -1)
{
	return (-1);
}
w = write(0, text_content, en);

	if (w == -1)
	{
		return (-1);
	}
close (0);
return (1);
}
