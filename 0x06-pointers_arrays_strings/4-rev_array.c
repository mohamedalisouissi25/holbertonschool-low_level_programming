#include "holberton.h"
/**
* reverse_array - reverse content of array
* @a: input
* @n: input
* Return: 0
*/
void reverse_array(int *a, int n)
{
int i, j, l = 0;
i = n - 1;
j = 0;
while (j < n / 2)
{
l = a[i];
a[i] = a[j];
a[j] = l;
j++;
i--;
}
}
