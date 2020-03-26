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
	if (index > 63)
		return (-1);

	index = 1 << index;
	*n |= index;
	return (1);
}
