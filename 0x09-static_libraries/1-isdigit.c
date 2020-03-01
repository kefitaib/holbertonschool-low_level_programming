#include "holberton.h"

/**
 * _isdigit - check if a letter is uppercase or not.
 * @c: the integer to check.
 *
 * Return: x.
 */

int _isdigit(int c)
{
int x = 0;
if (c >= '0' && c <= '9')
x = 1;
return (x);
}
