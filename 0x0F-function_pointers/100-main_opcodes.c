#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function.
 *
 * @argc: The operatornumber of argements.
 * @argv: an array of argements.
 * Return: integer.
 */

int main(int argc, char *argv[])
{
	char *f;
	int i = 0;

	if (argc != 2)
	{
		printf("Error");
		return (1);
	}

	f = (char *)main;

	if (atoi(argv[1]) <= 0)
	{
		printf("Error");
		return (2);
	}

	while (i < atoi(argv[1]))
	{
		printf("%02x", (unsigned char)f[i]);
		if (i != atoi(argv[1]) - 1)
		{
			putchar(' ');
		}
		i++;
	}

	putchar('\n');
	return (0);
}
