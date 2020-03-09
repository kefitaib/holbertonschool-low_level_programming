#include "dog.h"
#include <stdlib.h>

/**
 * *_strlen - returns a size of a string
 * @str1 : pointer to a string.
 * Return: int.
 */

int _strlen(char *str1)
{
	if (*str1 == '\0')
		return (0);
	return (_strlen(++str1) + 1);
}


/**
 * *_strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str : pointer to a string.
 * Return: poiter to a new string.
 */

char *_strdup(char *str)
{
	int size = 0, i;
	char *p, *str1;

	str1 = str;
	if (str == NULL)
		return (NULL);
	size = _strlen(str1);
	p = malloc(sizeof(char) * (size + 1));
	if (p == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		p[i] = str[i];
	p[i] = '\0';
	return (p);

}


/**
 * *new_dog - create initialize a variable of type struct dog.
 * @name : First name of the dog.
 * @age : age of the dog.
 * @owner : owner of the dog.
 *
 * Return: Pointer to a new dog.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggy;
	char *na, *ow;

	doggy = malloc(sizeof(dog_t));
	if (!doggy)
		return (NULL);

	na = _strdup(name);
	ow = _strdup(owner);
	if (!na || !ow)
	{
		free(na);
		free(ow);
		free(doggy);
		return (NULL);
	}

	doggy->name = na;
	doggy->age = age;
	doggy->owner = ow;

	return (doggy);
}
