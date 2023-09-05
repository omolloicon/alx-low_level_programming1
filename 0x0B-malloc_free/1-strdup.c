#include "main.h"
#include <stdlib.h>

/**
 * _strdup - copping a string
 * @str: string
 *
 * Return: done
 */

char *_strdup(char *str)
{
	char *m;
	int capacity = 0, n = 0;

	if (str == NULL)
		return (NULL);
	while (str[capacity] != '\0')
		capacity++;
	m = malloc((sizeof(char) * capacity) + 1);
	if (m == NULL)
		return (NULL);
	while (n < capacity)
	{
		m[n] = str[n];
		n++;
	}
	m[n] = '\0';
	return (m);
}
