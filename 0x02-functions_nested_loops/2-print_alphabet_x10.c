#include "holberton.h"
/**
 * print_alphabet_x10 - writes the alphabet in lowercase 10 times.
 * @void: No parameters.
 *
 * Return: 0.
 */
void print_alphabet_x10(void)
{
int i;
char x;
for (i = 1 ; i <= 10 ; i++)
{
for (x = 'a' ; x <= 'z' ; x++)
_putchar(x);
_putchar('\n');
}
}
