#include "holberton.h"
/**
 * print_last_digit - writes the last digit of an integer.
 * @x: integer.
 *
 * Return: x.
 */
int print_last_digit(int x)
{
int r;
r = x % 10;
if (r < 0)
{
_putchar(r * -1 + '0');
return (r * -1);
}
else if (x == 0)
{
_putchar(48);
return (0);
}
else
{
_putchar(r + '0');
return (r);
}
}
