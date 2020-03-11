#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - prints a array of integers
 * @array : an array of integers to print.
 * @size : size of the array.
 * @action : pointer to a function.
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && size > 0 && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
	else
		return;
}
