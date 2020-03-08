#include "holberton.h"
#include <stdlib.h>

/**
 * allocation - allocate a space memory for a pointer.
 * @p : pointer to ponter of string.
 * @i : current row of "p".
 * @width : width of the current row.
 * Return: void.
 */

int allocation(char **p, int i, int width)
{
	p[i] = malloc(sizeof(char) * width + 1);
	if (p[i] == NULL)
	{
		for (; i >= 0; i--)
			free(p[i]);
		free(p);
		return (0);
	}
	return (1);
}



/**
 * _heigth - return heigth or an array.
 * @str : string.
 * Return: integer.
 */

int _heigth(char *str)
{
	int i = 0, heigth = 0;

	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			heigth++;
			while (str[i] != ' ' && str[i] != '\0')
				i++;
		}
		else
			i++;
	}
	return (heigth);
}

/**
 * **strtow - function that splits a string into words.
 * @str : string.
 * Return: pointer.
 */

char **strtow(char *str)
{
	int i, j, k = 0, l, heigth = 0, width;
	char **p = NULL;

	if (str == NULL || *str == '\0')
		return (NULL);

	heigth = _heigth(str);
	if (heigth == 0)
		return (NULL);
	p = malloc(sizeof(char *) * (heigth + 1));
	if (p == NULL)
		return (NULL);

	for (i = 0; i < heigth; i++)
	{

		while (str[j] == ' ')
			j++;
		width = 0;
		k = j;

		while (str[k] != ' ')
		{
			width++;
			k++;
		}

		if (allocation(p, i, width) == 0)
			return (NULL);

		for (l = 0; l < width; l++, j++)
			p[i][l] = str[j];
		p[i][l] = '\0';
	}
	p[i] = NULL;
	return (p);
}
