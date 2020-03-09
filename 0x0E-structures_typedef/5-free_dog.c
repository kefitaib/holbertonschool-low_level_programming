#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free the memory reserved for a variable of type struct dog.
 * @d : variable of type struct dog.
 *
 * Return: Pointer to a new dog.
 */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
