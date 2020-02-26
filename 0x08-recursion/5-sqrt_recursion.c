#include "holberton.h"

/**
 * _sqrt - returns the natural square root of a number.
 * @n : integer.
 * @x : integer.
 * Return: intger.
 */

int _sqrt(int n, int x)
{
if ((x * x) > n)
return (-1);
else
{
if ((x * x) == n)
return (x);
else
return (_sqrt(n, x + 1));
}
}


/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n : integer.
 * Return: intger.
 */


int _sqrt_recursion(int n)
{
int x = 0;
return (_sqrt(n, x));
}
