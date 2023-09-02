#include "main.h"

/**
 * _memcpy - main entry
 * @dest: where to
 * @src: where from
 * @n: capacity
 *
 * Return: done
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
	{
		dest[k] = src[k];
	}
	return (dest);
}
