#include "search_algos.h"

/**
 * binary_search - searches for a value in an array of integers
 * @array : pointer to the first element of the array to search in
 * @size : the number of elements in array
 * @value : the value to search for
 *
 * Return: return the first index where value is located
 */


int binary_search(int *array, size_t size, int value)
{
	size_t i = 0, j;
	char *s;
	int x = 0;

	if (!array)
		return (-1);

	while (i < size)
	{
		s = "";
		printf("Searching in array: ");
		for (j = i; j < size; j++)
		{
			printf("%s", s);
			printf("%d", array[j]);
			s = ", ";
		}
		printf("\n");

		if ((int)i == x + 1)
			x = (((size - i) - 1) / 2) + i;

		else
			x = ((size - 1) / 2);

		if (array[x] == value)
			return ((int)i);

		else if (array[x] < value)
			i = x + 1;

		else
			size = x;
	}

	return (-1);
}
