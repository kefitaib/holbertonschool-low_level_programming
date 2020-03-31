#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename : name of a file.
 * @letters : number of letters ot print.
 * Return: t.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t x;
	int fd, nb;
	char *s;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	s = malloc(letters);
	nb = read(fd, s, letters);
	if (nb == -1)
		return (0);

	x = write(STDOUT_FILENO, s, nb);
	if (x == -1)
		return (0);

	free(s);
	close(fd);
	return (x);

}
