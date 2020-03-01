#include "holberton.h"
/**
 * _isalpha - test if a char is an alphabet or not.
 * @c: code.
 *
 * Return: 0.
 */
int _isalpha(int c)
{
int x = 0;
if ((c > 64) && (c < 123))
x = 1;
return (x);
}
