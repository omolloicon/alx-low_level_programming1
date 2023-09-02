#include "main.h"

/**
 * _memset - filling allocated memory
 * @s: memory
 * @b: being copied from
 * @n: this is the size
 *
 * Return: done
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int k = 0;

	while (k < n)
	{
		s[k] = b;
		k++;
	}
	return (s);
}
