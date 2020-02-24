#include "holberton.h"
/**
* print_chessboard - prints chessbord
* @a: input
* Return: output
*/
void print_chessboard(char (*a)[8])
{
unsigned int i, k;
for (i = 0; i < 8; i++)
{
for (k = 0; k < 8; k++)
_putchar(a[i][k]);
_putchar('\n');
}
}
