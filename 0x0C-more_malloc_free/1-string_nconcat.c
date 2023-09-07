#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings using at
 *                  most an inputted number of bytes.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes of s2 to concatenate to s1.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - a pointer to the concatenated space in memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *join;
	unsigned int len = n, pos;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (pos = 0; s1[pos]; pos++)
		len++;

	join = malloc(sizeof(char) * (len + 1));

	if (join == NULL)
		return (NULL);

	len = 0;

	for (pos = 0; s1[pos]; pos++)
		join[len++] = s1[pos];

	for (pos = 0; s2[pos] && pos < n; pos++)
		join[len++] = s2[pos];

	join[len] = '\0';

	return (join);
}
