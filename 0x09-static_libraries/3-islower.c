#include "holberton.h"
/**
 * _islower - test if a char is lowercase.
 * @c: code.
 *
 * Return: 0.
 */
int _islower(int c)
{
int x = 0;
if ((c > 96) && (c < 123))
x = 1;
return (x);
}

