#include "holberton.h"

/**
 * append_text_to_file - append a text to a file
 * @filename: input
 * @text_content: input
 * Return: output
 **/

int append_text_to_file(const char *filename, char *text_content)
{

int i, n, j;

	if (filename == NULL)
		return (-1);

i = open(filename, O_APPEND | O_WRONLY);

	if (i == -1)
		return (-1);

	if (text_content == NULL)
		return (1);

n = strlen(text_content);

j = write(i, text_content, n);

close(i);

	if (j == -1)
		return (-1);

return (1);
}
