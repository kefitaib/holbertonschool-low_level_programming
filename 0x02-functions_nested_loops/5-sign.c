#include "holberton.h"
/**
 * print_sign - check the sign of an integer.
 * @n: the integer to check.
 *
 * Return: 0.
 */
int print_sign(int n)
{
int x = 0;
if (n > 0)
{
x = 1;
_putchar('+');
}
else if (n < 0)
{
x = -1;
_putchar('-');
}
else
_putchar('0');
return (x);
}

