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
	int ca = 0, cb = 0, m, n = 0, r = 0;

	if (s1 != NULL)
	{
		while (s1[ca] != '\0')
			cb++;
	}
	else if (s1 == NULL)
		ca = 0;
	if (s2 != NULL)
	{
		while (s2[cb] != '\0')
			cb++;
	}
	else if (s2 == NULL)
		cb = 0;

	g = malloc((sizeof(char) * ca) + (sizeof(char) * cb) + 1);
	if (g == NULL)
		return (NULL);

	for (m = 0; m < ca; m++, n++)
		g[m] = s1[n];
	for (; m < ca + cb; m++, r++)
		g[m] = s2[r];
	g[m] = '\0';
	return (g);
}
