#include "holberton.h"
/**
 * jack_baue - prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.
 * @void: no parameters.
 *
 * Return: x.
 */
void jack_bauer(void)
{
int i, j, k, x, y, w = 9;
for (i = 0 ; i <= 2 ; i++)
{
if (i == 2)
w= 3;
for (j = 0 ; j <= w ; j++)
{
for (k = 0 ; k <= 59 ; k++)
{
_putchar (i + '0');
_putchar(j + '0');
_putchar(':');
x = k / 10;
y = k % 10;
_putchar(x + '0');
_putchar(y + '0');
_putchar('\n');
}
}
}
}
