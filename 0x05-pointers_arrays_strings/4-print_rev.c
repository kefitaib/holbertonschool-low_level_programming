#include "holberton.h"

/**
 * print_rev - prints a string, in reverse.
 * @s : string.
 * Return: void.
 */

void print_rev(char *s)
{
int i = 0, j = 0;
while (s[i] != '\0')
i++;

for (j = i ; j >= 0 ; j--)
_putchar(s[j]);
_putchar('\n');
}
