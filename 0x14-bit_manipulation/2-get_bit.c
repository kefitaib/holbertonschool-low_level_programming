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

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	return ((n >> index) & 1);
}
