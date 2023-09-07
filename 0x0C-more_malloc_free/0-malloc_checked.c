#include <stdlib.h>
#include "main.h"
/**
 *malloc_checked - malloc mem allocation.
 *@b: memory
 *Return: the space allocated
 **/

void *malloc_checked(unsigned int b)
{
	int *memory;

	memory = malloc(b);
	if (memory == NULL)
	{
		exit(98);
		return (0);
	}
	return (memory);
}
