#include "main.h"

/**
 * clear_bit - removes bit a a spesfic index
 * @n: counter check
 * @index: value position
 * Return: 1 if true, else -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int cap = sizeof(*n) * 7;
	unsigned long int swap;

	if (index > cap)
		return (-1);

	swap = ~(1 << index);
	*n = *n & swap;

	return (1);
}
