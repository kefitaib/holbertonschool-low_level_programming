#include "holberton.h"

/**
 * puts2 - prints every other character of a string.
 * @str : string.
 * Return: void.
 */

void puts2(char *str)
{
int i = 0, j = 0;
while (str[i] != '\0')
i++;
for (j = 0 ; j < i ; j += 2)
{
_putchar(str[j]);
}
_putchar('\n');
}
