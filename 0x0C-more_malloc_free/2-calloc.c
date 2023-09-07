#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Array memory allocation.
 * @nmemb: number of all elements.
 * @size: element size.
 * Return: the allocated memory if succesful
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *input, *space;
	unsigned int counter;

	if (nmemb == 0 || size == 0)
		return (0);

	space = malloc(size * nmemb);

	if (space == 0)
		return (0);

	input = space;

	for (counter = 0; counter < (size * nmemb); counter++)
		input[counter] = '\0';

	return (space);
}
