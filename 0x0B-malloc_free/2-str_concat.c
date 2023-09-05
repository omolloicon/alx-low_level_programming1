#include "main.h"
#include <stdlib.h>

/**
 * str_concat - combines strna and strnb
 * @s1: strn a
 * @s2: strn b
 *
 * Return: concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *g;
	unsigned int m, n, z, max;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (m = 0; s1[m] != '\0'; m++)
		;

	for (n = 0; s2[n] != '\0'; n++)
		;

	g = malloc(sizeof(char) * (m + n + 1));

	if (g == NULL)
	{
		free(g);
		return (NULL);
	}

	for (z = 0; z < m; z++)
		g[z] = s1[z];

	max = n;
	for (n = 0; n <= max; k++, n++)
		g[z] = s2[n];

	return (g);
}
