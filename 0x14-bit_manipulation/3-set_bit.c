#include "holberton.h"
#include <stdio.h>

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n : number.
 * @index : the index of the bit you want to get.
 * Return: the new integer.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	int t[64];
	unsigned int i, j;
	unsigned long int x = *n;

	for (i = 0; x > 0; i++)
	{
		t[i] = x & 1;
		x >>= 1;
	}

	if (index > 63)
		return (-1);

	if (index >= i)
		for (; i <= index; i++)
			t[i] = 0;

	t[index] = 1;

	for (j = 0; j < i; j++)
		x += t[j] << j;

	*n = x;
	return (1);
}
