#include "holberton.h"
/**
 * main - write if a letter is lowercase or not.
 * @void: No parameters
 * Return: 0
 */

int main(void)
{
int r;
r = _islower('A');
_putchar(r + '0');
r = _islower('o');
_putchar(r + '0');
r = _islower('a');
_putchar(r + '0');
_putchar('\n');
return (0);
}
