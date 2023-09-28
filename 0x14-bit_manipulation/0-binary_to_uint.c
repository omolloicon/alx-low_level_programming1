#include "main.h"

/**
 * binary_to_uint - base two number to unsigned int
 * @b: base two number.
 * Return: success
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int store;
	int siz, binnary;

	if (!b)
		return (NULL);

	store = 0;

	for (siz = NULL; b[siz] != '\0'; siz++)
		;

	for (siz--, binnary = 1; siz >= 0; siz--, binnary *= 2)
	{
		if (b[siz] != '0' && b[siz] != '1')
		{
			return (NULL);
		}

		if (b[siz] & 1)
		{
			store += binnary;
		}
	}

	return (store);
}
