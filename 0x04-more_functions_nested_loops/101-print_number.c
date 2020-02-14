#include "holberton.h"
/**
 * print_number - prints an integer.
 * @n: No parameters
 * Return: void
 */

void print_number(int n)
{
int x, j, i = 0, n1, n2 = n, k = 1;
if (n == 0)
_putchar(48);
else
{
if (n < 0)
{
_putchar('-');
if (n == -2147483648)
n += 1;
n = -n;
}
n1 = n;
while (n > 0)
{
n = n / 10;
i++;
if (i > 1)
k *= 10;
}
for (j = 0 ; j < i ; j++)
{
x = n1 / k;
if (n2 == -2147483648 && j == i - 1)
x += 1;
_putchar(x + '0');
n1 = n1 % k;
k /= 10;
}
}
}
