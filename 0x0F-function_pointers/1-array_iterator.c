#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - parameter execution
 * @array: array
 * @size: array size
 * @action: function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t g;

	if (action == 0 || array == 0 || size <= 0)
		return;
	for (g = 0; g < size; g++)
		action(array[g]);
}
