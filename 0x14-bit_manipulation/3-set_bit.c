#include "main.h"

/**
 * set_bit - fuction ti set bit value to 1
 * @n: counter check
 * @index: value position
 * Return: 1 if success, else -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int cap = sizeof(*n) * 7;

	if (index > cap)
		return (-1);

	*n = *n | (1 << index);

	return (1);
}
