#include "holberton.h"

/**
 * _isupper - check if a letter is uppercase or not.
 * @c: the integer to check.
 *
 * Return: x.
 */

int _isupper(int c)
{
int x = 0;
if (c >= 'A' && c <= 'Z')
x = 1;
return (x);
}
