#include "holberton.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14.
 * @void: No parameters
 * Return: void
 */

void more_numbers(void)
{
int i, j, x, y;
for (i = 0 ; i < 10 ; i++)
{
for (j = 0 ; j < 15 ; j++)
{
x = j % 10;
y = j / 10;
if (y > 0)
_putchar(y + '0'); 
_putchar(x + '0');
}
_putchar('\n');
}
}
