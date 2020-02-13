#include "holberton.h"
/**
 * print_numbers - print all single digit numbers of base 10.
 * @void: No parameters
 * Return: void
 */
void print_numbers(void)
{
int i;
for (i = 0 ; i < 10 ; i++)
{
_putchar(i + '0');
}
_putchar('\n');
}
