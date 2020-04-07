#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it
 * @filename: input
 * @letters: input
 * Return: output
 **/

ssize_t read_textfile(const char *filename, size_t letters)

{

int i, j;
int n = 0;
char *chr;

	if (!filename)
		return (0);

i = open(filename, O_RDONLY);
	if (i == -1)
		return (0);

chr = malloc(sizeof(char) * (letters));
	if (!chr)
		return (0);

n = read(i, chr, letters);
	if (n == -1)
	return (0);

j = write(STDOUT_FILENO, chr, n);

close(i);

free(chr);

	if (j == -1)
		return (0);

return (n);

}
