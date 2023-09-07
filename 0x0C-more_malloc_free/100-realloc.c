#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block.
 * @ptr: previously allocated memory.
 * @old_size: old memory.
 * @new_size: new memory.
 * Return: new memory if sucess else error.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != 0)
	{
		free(ptr);
		return (0);
	}

	if (ptr == 0)
		ptr = malloc(new_size);

	if (new_size == old_size)
		return (ptr);

	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}
