#include "holberton.h"
/**
 * _isdigit - cheks uppercase
 * @Al: input
 * Return: 1 if digit otherwise 0
 */
int _isdigit(int Al)
{
if ((Al <= '9') && (Al >= '0'))
{
return (1);
}
else
{
return (0);
}
}
