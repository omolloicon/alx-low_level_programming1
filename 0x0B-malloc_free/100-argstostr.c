#include "main.h"
#include <stdlib.h>

/**
 * argstostr - program concatination
 * @ac: tally
 * @av: direction
 * Return: sucess
 */

char *argstostr(int ac, char **av)
{
	char *exit;
	int k, m, n, mn;

	if (ac == 0)
		return (NULL);

	for (k = m = 0; m < ac; m++)
	{
		if (av[m] == NULL)
			return (NULL);

		for (n = 0; av[m][n] != '\0'; n++)
			k++;
		k++;
	}

	exit = malloc((k + 1) * sizeof(char));

	if (exit == NULL)
	{
		free(exit);
		return (NULL);
	}

	for (m = n = mn = 0; mn < k; n++, mn++)
	{
		if (av[m][n] == '\0')
		{
			exit[mn] = '\n';
			m++;
			mn++;
			n = 0;
		}
		if (mn < k - 1)
			exit[mn] = av[m][n];
	}
	exit[mn] = '\0';

	return (exit);
}
