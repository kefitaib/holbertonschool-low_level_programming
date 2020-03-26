#include "holberton.h"
#include <stdio.h>

/**
 * flip_bits - returns the number of bits you would
 *             need to flip to get from one number to another.
 * @n : first number.
 * @m : second number.
 * Return: the new integer.
 */


unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x;
	int i = 0;

	x = n ^ m;
	while ( > 0)
	{
		if (x & 1)
			i++;
		x >>= 1;
	}
	return (i);
}
