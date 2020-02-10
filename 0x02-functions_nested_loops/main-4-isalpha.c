#include "holberton.h"
/**
 * main - write if a char is an alphabet or not.
 * @void: No parameters
 * Return: 0
 */

int main(void)
{
int r;
r = _isalpha('A');
_putchar(r + '0');
r = _isalpha('o');
_putchar(r + '0');
r = _isalpha(';');
_putchar(r + '0');
_putchar('\n');
return (0);
}
