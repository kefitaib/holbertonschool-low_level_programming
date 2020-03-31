#include "holberton.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename : name of a file.
 * @text_content : the content of the file.
 * Return: integer.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, nb, x;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (!text_content)
		return (1);

	for (nb = 0; text_content[nb]; nb++)
		;

	x = write(fd, text_content, nb);
	if (x == -1)
		return (-1);

	close(fd);
	return (1);

}
