#include "holberton.h"
/**
 * main - prints an integer.
 * @n: No parameters
 * Return: void
 */

void print_number(int n)
{
int m, s, d, u, n1 = n;
if (n < 0)
n = -n;
u = n % 10;
n /= 10;
d = n % 10;
n /= 10;
s = n % 10;
n /= 10;
m = n % 10;
if (n1 < 0)
_putchar('-');
if (m > 0)
{
_putchar(m + '0');
_putchar(s + '0');
_putchar(d + '0');
_putchar(u + '0');
}
else if (s > 0)
{
_putchar(s + '0');
_putchar(d + '0');
_putchar(u + '0');
}
else if (d > 0)
{
_putchar(d + '0');
_putchar(u + '0');
}
else
_putchar(u + '0');
}
