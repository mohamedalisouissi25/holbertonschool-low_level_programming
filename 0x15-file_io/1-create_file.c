#include "holberton.h"

/**
 * create_file - create afile
 * @filename: input
 * @text_content: input
 * Return: output
 **/

int create_file(const char *filename, char *text_content)

{

int i, n, j;

	if (filename == NULL)
		return (-1);

i = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

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
