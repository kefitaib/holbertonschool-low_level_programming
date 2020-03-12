#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function.
 *
 * @ac: The operatornumber of argements.
 * @av: an array of argements.
 * Return: integer.
 */

int main(int ac, char **av)
{
	char *f;
	int i = 0;

	f = (char *)main

	if (ac != 2)
	{
		printf("Error");
		return (1);
	}

	if (atoi(av[1]) <= 0)
	{
		printf("Error");
		return (2);
	}

	while (i < atoi(av[1]))
	{
		printf("%02x", (unsigned char)f[i]);
		if (i != atoi(av[1]) - 1)
		{
			putchar(' ');
		}
		i++;
	}

	putchar('\n');
	return (0);
}
