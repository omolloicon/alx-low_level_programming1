#include "main.h"
#include <stdlib.h>

/**
 * create_array - proto type
 * @size: mem capacity
 * @c: data type
 * Return: array
 */

char *create_array(unsigned int size, char c)
{
	char *m;
	unsigned int n;

	if (size == 0 || m == NULL)
		return (NULL)

	m = malloc(sizeof(char) * size);
	for (n = 0; n < size; n++)
		m[n] = c;

	return (m);
}
