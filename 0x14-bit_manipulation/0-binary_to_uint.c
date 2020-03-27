#include <stdlib.h>
#include "holberton.h"
#include <stdio.h>


/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b : binary number.
 *
 * Return: unsigned int.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int x = 0;
	int i, j;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
		if (b[i] != '1' && b[i] != '0')
			return (0);

	for (j = i - 1; b[j]; j--)
		x += (b[j] - '0') << (i - 1 - j);

	return (x);
}
