#include "holberton.h"
/**
 * print_triangle - draws a diagonal line on the terminal.
 * @size: No parameters
 * Return: void
 */

void print_triangle(int size)
{
int i, j, k, x = 1;
if (size > 0)
{
for (i = 0 ; i < size ; i++)
{
for (j = 0 ; j < (size - x) ; j++)
_putchar(' ');
for (k = (size - x) ; k < size ; k++)
_putchar('#');
_putchar('\n');
x++;
}
}
else
_putchar('\n');
}
