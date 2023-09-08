#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - string concatination.
 *
 * @s1: strn 1.
 * @s2: strn 2
 * @n: bytes to transfer
 * Return: conatinated string if sucess and NULL if the program fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *join;
	unsigned int pos;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (pos = 0; s1[pos]; pos++)
		n++;

	join = malloc(sizeof(char) * (n + 1));

	if (join == NULL)
		return (NULL);

	n = 0;

	for (pos = 0; s1[pos]; pos++)
		join[n++] = s1[pos];

	for (pos = 0; s2[pos] && pos < n; pos++)
		join[n++] = s2[pos];

	join[n] = '\0';

	return (join);
}
