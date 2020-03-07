#include <stdlib.h>
#include <stdio.h>
/**
* main - prints program task 2-args
* @argc: input
* @argv: input
* Return: output
*/
int main(int argc, char *argv[])
{
int i;
	for (i = 0 ; i < argc ; i++)
	printf("%s\n", argv[i]);
return (0);
}
