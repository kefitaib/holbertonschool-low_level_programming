#include "holberton.h"
#include <stdio.h>


/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n : number.
 * @index : the index of the bit you want to get.
 * Return: the new integer.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{

	if (index > 63)
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
