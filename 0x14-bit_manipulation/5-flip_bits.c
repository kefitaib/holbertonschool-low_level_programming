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
	int t[64], r[64], i, j;
	unsigned int x = 0;

	for (i = 63; n > 0; i--)
	{
		t[i] = n & 1;
		n >>= 1;
	}

	for (j = 63; m > 0; j--)
	{
		r[j] = m & 1;
		m >>= 1;
	}

	for (; i >= 0; i--)
		t[i] = 0;

	for (; j >= 0; j--)
		r[j] = 0;

	for (i = 0; i < 64; i++)
		if (t[i] ^ r[i])
			x++;

	return (x);
}
