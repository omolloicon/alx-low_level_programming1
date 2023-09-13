#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index -  a function that searches for an integer.
 * @array: array to pointer
 * @size: length of the array
 * @cmp: points to a fuction
 * Return: sucess else -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int tally = 0;

	if (size <= 0)
		return (-1);
	if (array && cmp)
	{
		while (tally < size)
		{
			if (cmp(array[tally]) != 0)
				return (tally);
			tally++;
		}
	}
	return (-1);
}
