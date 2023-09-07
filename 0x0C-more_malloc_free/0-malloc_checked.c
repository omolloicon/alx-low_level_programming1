#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - malloc mem allocation.
 * @b: memory
 * Return: the space allocated
 *
 */

void *malloc_checked(unsigned int b)
{
	char *mem;

	mem = malloc(b);
	if (mem == NULL)
	{
		exit(98);
		return(NULL);
	}
	return (mem);
}
