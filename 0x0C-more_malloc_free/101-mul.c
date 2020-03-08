#include "holberton.h"
#include <stdlib.h>

/**
 * print_error - print "Error" with putchar.
 *
 * Return: integer.
 */

void print_error(void)
{
	_putchar('E');
	_putchar('r');
	_putchar('r');
	_putchar('o');
	_putchar('r');
	_putchar('\n');
}

/**
 * print_result - print the result of the multiplication.
 * @k : position of start of printing.
 * @res : pointer of the string to print.
 * Return: void.
 */

void print_result(int k, char *res)
{
	int x = 0, i;

	if (res[k] == 48)
	{
		res[k] = '\0';
		x = k - 1;
	}
	else
		x = k;
	res[k + 1] = '\0';

	for (i = x; i >= 0; i--)
		_putchar(res[i]);
	_putchar('\n');
}

/**
 * is_null - check a string if it's contain only 0.
 * @s : string.
 *
 * Return: integer.
 */

int is_null(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] != '0')
			return (1);
		i++;
	}
	return (0);
}


/**
 * is_number - check a string if it's contain only digits.
 * @s : string.
 *
 * Return: integer.
 */

int is_number(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] < '0' || s[i] > '9')
			return (1);
		i++;
	}
	return (0);
}


/**
 * main -  multiplies two positive numbers.
 * @arg1 : length of the first argement.
 * @arg2 : length of the second argement.
 * @argv1 : the first argement.
 * @argv2 : the second argement.
 * @res : the result.
 * Return: integer.
 */

int calcul(int arg1, int arg2, char *argv1, char *argv2, char *res)
{
	int i, j, k, x = 0, l = 1;

	for (i = arg1 - 1; i >= 0; i--, l++)
	{
		k = l;
		for (j = arg2 - 1; j >= 0; j--)
		{
			x = (argv2[j] - '0') * (argv1[i] - '0');

			if (res[k])
				x += res[k] - '0';
			res[k] = (x % 10) + '0';
			res[k + 1] = (x / 10) + '0';

			k++;
		}
	}
	return (k);
}


/**
 * main -  multiplies two positive numbers.
 * @argc : number of argements.
 * @argv : array of argements.
 *
 * Return: Nothing.
 */

int main(int argc, char **argv)
{
	int arg1 = 0, arg2 = 0, k;
	char *res;

	if (argc != 3)
	{
		print_error();
		exit(98);
	}

	if (is_number(argv[1]) == 1 || is_number(argv[2]) == 1)
	{
		print_error();
		exit(98);
	}

	if (is_null(argv[1]) == 0 || is_null(argv[2]) == 0)
	{
	_putchar('0');
	_putchar('\n');
	return (0);
	}

	for (arg1 = 0; argv[1][arg1] != '\0'; arg1++)
		;
	for (arg2 = 0; argv[2][arg2] != '\0'; arg2++)
		;

	res = malloc(sizeof(char) * (arg1 + arg2 + 1));
	if (res == NULL)
	{
		print_error();
		exit(98);
	}

	k = calcul(arg1, arg2, argv[1], argv[2], res);

	print_result(k, res);
	return (0);
}
