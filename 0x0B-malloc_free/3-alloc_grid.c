#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns second array.
 * @width: along.
 * @height: across.
 *
 * Return: pointer to array
 */
int **alloc_grid(int width, int height)
{
	int **search, m, n;

	if (width < 1 || height < 1)
		return (NULL);

	search = malloc(height * sizeof(int *));
	if (search == NULL)
	{
		free(search);
		return (NULL);
	}

	for (m = 0; m < height; m++)
	{
		search[m] = malloc(width * sizeof(int));
		if (search[m] == NULL)
		{
			for (m--; m >= 0; m--)
				free(search[m]);
			free(search);
			return (NULL);
		}
	}

	for (m = 0; m < height; m++)
		for (n = 0; n < width; n++)
			search[m][n] = 0;

	return (search);
}
