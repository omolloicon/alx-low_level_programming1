#include <stdlib.h>
#include "main.h"
/**
 *malloc_checked - malloc mem allocation.
 *@b: memory.
 *Return: the space allocated;
 **/

void *malloc_checked(unsigned int b)
{
	void *memory;

	memory = malloc(b);
	if (memory == 0)
	{
		exit(98);
		return (0);
	}
	return (memory);
}
