#include "holberton.h"
#include <stdio.h>

/**
 * get_bit - returns the value of a bit at a given index.
 * @n : number.
 * @index : the index of the bit you want to get.
 * Return: thr bit at the given index.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int t[64];
	unsigned int i;

	for (i = 0; n > 0; i++)
	{
		t[i] = n & 1;
		n >>= 1;
	}

	if (index > 63)
		return (-1);

	if (index >= i)
		return (0);

	return (t[index]);
}
