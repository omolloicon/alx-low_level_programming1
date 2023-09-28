#include "main.h"

/**
 * get_bit - obtain bit value of spesfic number
 * @n: count through bit
 * @index: beginns at zero
 * Return: value bit else -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int cap;
	unsigned int swich;

	swich = sizeof(n) * 8 - 1;

	if (index > swich)
		return (-1);

	cap = (n >> index) & 1;

	return (cap);
}
