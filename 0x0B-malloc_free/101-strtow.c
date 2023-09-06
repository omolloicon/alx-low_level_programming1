#include "main.h"
#include <stdlib.h>

/**
 * ch_free_grid - free array 2
 * @grid: this our multidimensional array.
 *
 * @height: verticall measure of array.
 *
 * Return: null
 */
void ch_free_grid(char **grid, unsigned int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
			free(grid[height]);
		free(grid[height]);
		free(grid);
	}
}

/**
 * strtow - seperates words in strn independently.
 * @str: string to seperate
 *
 * Return: sucess
 */
char **strtow(char *str)
{
	char **exit;
	unsigned int k, colum, m, n, mn;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (k = colum = 0; str[k] != '\0'; k++)
		if (str[k] != ' ' && (str[k + 1] == ' ' || str[k + 1] == '\0'))
			colum++;
	exit = malloc((colum + 1) * sizeof(char *));
	if (exit == NULL || colum == 0)
	{
		free(exit);
		return (NULL);
	}
	for (m = mn = 0; m < colum; m++)
	{
		for (k = mn; str[k] != '\0'; k++)
		{
			if (str[k] == ' ')
				mn++;
			if (str[k] != ' ' && (str[k + 1] == ' ' || str[k + 1] == '\0'))
			{
				exit[m] = malloc((k - mn + 2) * sizeof(char));
				if (exit[m] == NULL)
				{
					ch_free_grid(exit, m);
					return (NULL);
				}
				break;
			}
		}
		for (n = 0; mn <= k; mn++, n++)
			exit[m][n] = str[mn];
		exit[m][n] = '\0';
	}
	exit[m] = NULL;
	return (exit);
}
