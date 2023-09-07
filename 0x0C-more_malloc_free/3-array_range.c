#include "main.h"
#include <stdlib.h>

/**
 * array_range -specified range
 * @min: top most value
 * @max: bottom most value
 *
 * Return: return the ptr to rray if sucesfully
 */
int *array_range(int min, int max)
{
	int *me;
	int pos;
	int capacity;

	if (min > max)
		return (0);

	capacity = max - min + 1;

	me = malloc(sizeof(int) * capacity);

	if (me == 0)
		return (0);

	for (pos = 0; pos < capacity; pos++)
		me[pos] = min++;

	return (me);
}
