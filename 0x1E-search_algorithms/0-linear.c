#include "search_algos.h"

/**
 * reset - clear the array of caracters
 * @str: string
 * Return: void
 */

void reset(char *str)
{
	while (*str != '\0')
		*(str++) = '\0';
}

/**
 * print_number - prints an integer.
 * @n: No parameters
 * Return: void
 */

void print_number(int n)
{
	int x, i = 0, j, n1, n2 = n, k = 1, m = 0;
	char s[20];

	if (n == 0)
		s[m] = 48;

	else
	{
		if (n < 0)
		{
			s[m] = '-';
			m++;
			if (n == -2147483648)
				n += 1;
			n = -n;
		}
		n1 = n;
		while (n > 0)
		{
			n = n / 10;
			i++;
			if (i > 1)
				k *= 10;
		}
		for (j = 0 ; j < i ; j++)
		{
			x = n1 / k;
			if (n2 == -2147483648 && j == i - 1)
				x += 1;

			s[m] = x + '0';
			m++;
			n1 = n1 % k;
			k /= 10;
		}
	}

	write(1, s, strlen(s));
	reset(s);
}


/**
 * linear_search - searches for a value in an array of integers
 * @array : pointer to the first element of the array to search in
 * @size : the number of elements in array
 * @value : the value to search for
 *
 * Return: return the first index where value is located
 */


int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;
	char s[100];

	if (!array)
		return (-1);

	while (i < size)
	{
		write(1, "Value checked array[", 20);
		print_number((int)i);
		write(1, "] = [", 5);
		print_number(array[i]);
		write(1, "]\n", 2);
		i++;
		reset(s);

		if (array[i] == value)
			return ((int)i);
	}

	return (-1);
}