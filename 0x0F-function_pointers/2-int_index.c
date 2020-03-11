#include <stdio.h>
#include "function_pointers.h"


/**
 * int_index - searches for an integer.
 * @array : array of integers.
 * @size  : size of the array.
 * @cmp : pointer to a function.
 * Return: 0 if false, something else otherwise.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && cmp && size > 0)
	{
		while (cmp(array[i]) == 0 && i < size)
			i++;

		if (i == size)
			return (-1);
		return (i);
	}
	else
		return (-1);
}
