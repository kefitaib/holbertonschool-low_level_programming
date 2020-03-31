#include "holberton.h"
#include <stdio.h>

/**
 * test_close - check if the file was closed.
 * @x : the close result.
 * Return: void.
 */


void test_close(int x)
{
	if (x == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", x);
		exit(100);
	}
}


/**
 * test_read - check if the file was closed.
 * @x : the close result.
 * Return: void.
 */


void test_read(int x, char s[])
{
	if (x == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", s);
		exit(98);
	}
}


/**
 * test_write - check if the file was closed.
 * @x : the close result.
 * Return: void.
 */


void test_write(int x, char s[])
{
	if (x == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", s);
		exit(99);
	}
}


/**
 * main - copier the content of a file into another one .
 * @av : list of argements.
 * @ac : number of argements.
 * Return: Always 0.
 */


int main(int ac, char **av)
{
	int fd_from, fd_to, nb_from, nb_to;
	char buffer[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s %s\n", av[1], av[2]);
		exit(97);
	}

	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	fd_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}

	do {
		nb_from = read(fd_from, buffer, 1024);
		test_read(nb_from, av[1]);

		nb_to = write(fd_to, buffer, nb_from);
		test_write(nb_to, av[2]);

	} while (nb_to == 1024);

	nb_from = close(fd_from);
	test_close(nb_from);

	nb_to = close(fd_to);
	test_close(nb_to);

	return (0);
}
