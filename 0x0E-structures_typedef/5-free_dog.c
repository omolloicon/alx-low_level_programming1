#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees dogs memory.
 * @d: dog's struct
 * Return: null
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
