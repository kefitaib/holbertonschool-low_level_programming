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
	int n = 0, i, j, bool = 0;
	char *s;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);

		if (b[i] == '1')
			bool = 1;

		if (bool == 1)
			n++;
	}

	s = malloc(n + 1);
	if (!s)
		return (0);

	for (j = i - 1; j >= i - n; j--)
		s[i - j - 1] = b[j];

	s[i - j - 1] = '\0';

	for (j = 0; s[j]; j++)
		x += (s[j] - '0') << j;

	free(s);
	return (x);
}
