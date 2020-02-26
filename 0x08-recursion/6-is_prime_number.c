#include "holberton.h"

/**
 * prime - test if an integer is a prime number,.
 * @n : integer.
 * @x : integer.
 * Return: integer.
 */

int prime(int n, int x)
{
if (x == n)
return (1);
else if (n % x == 0)
return (0);
else
return (prime(n, x + 1));
}


/**
 * is_prime_number - test if an integer is a prime number,.
 * @n : string.
 * Return: .
 */

int is_prime_number(int n)
{
int x = 2;
if (n == 2)
return (1);
else if (n <= 1)
return (0);
else
return (prime(n, x));
}
