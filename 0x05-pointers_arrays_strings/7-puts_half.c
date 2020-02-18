#include "holberton.h"

/**
 * puts_half - prints half of a string.
 * @str : string.
 * Return: void.
 */

void puts_half(char *str)
{
int x, j = 0, i = 0;
while (str[i] != '\0')
i++;
if (i % 2 != 0)
x = (i - 1) / 2;
else
x = i / 2;
for (j = x ; j < i ; j++)
_putchar(str[j]);
_putchar('\n');
}
