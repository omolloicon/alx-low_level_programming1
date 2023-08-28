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
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
