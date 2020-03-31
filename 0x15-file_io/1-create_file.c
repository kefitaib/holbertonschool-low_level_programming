#include "holberton.h"

/**
 * create_file - creates a file.
 * @filename : name of a file.
 * @text_content : the content of the file.
 * Return: integer.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, nb, x;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (!text_content)
		return (1);

	for (nb = 0; text_content[nb]; nb++)
		;

	x = write(fd, text_content, nb - 1);
	if (x == -1)
		return (-1);

	close(fd);
	return (1);

}
