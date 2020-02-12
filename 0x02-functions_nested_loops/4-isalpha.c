#include "holberton.h"
/**
 * _isalpha - checks for alphabetic charachter
 * @c: input
 * Return: 1 if c is lowercase or upppercase and 0 otherwise
 */
int _isalpha(int c)
{
if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
{
return (1);
}
else
{
return (0);
}
}
