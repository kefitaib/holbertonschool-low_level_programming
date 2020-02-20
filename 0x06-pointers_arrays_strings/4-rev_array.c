#include "holberton.h"

/**
 * reverse_array - compares two strings.
 * @a : array of integers.
 * @n : lenght of the array.
 * Return: Always 0.
 */

void reverse_array(int *a, int n)
{
int i, j = 0;
for (i = 0 ; i < n / 2 ; i++)
{
j = a[i];
a[i] = a[n - 1 - i];
a[n - 1 - i] = j;
}
}
