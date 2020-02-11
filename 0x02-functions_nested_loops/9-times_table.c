#include "holberton.h"
/**
 * times_table - prints the 9 times table, starting with 0.
 * @void: no parameters.
 *
 * Return: x.
 */
void times_table(void)
{
int i, j, x, x2, y, y2, w;
for (i = 0 ; i <= 9 ; i++)
{
for (j = 0 ; j <= 9 ; j++)
{
x = i * j;
x2 = i * (j + 1);
y = x / 10;
y2 = x2 / 10;
w = x % 10;
if (y == 0)
{
_putchar(w + '0');
if (j < 9)
{
_putchar(',');
_putchar(' ');
}
if ((y2 == 0) && (j < 9))
_putchar(' ');
}
else
{
_putchar(y + '0');
_putchar(w + '0');
if (j < 9)
{
_putchar(',');
_putchar(' ');
}
}
}
_putchar('\n');
}
}
