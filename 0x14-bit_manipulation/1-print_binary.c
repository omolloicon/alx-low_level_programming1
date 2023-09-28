#include "main.h"

/**
 * print_binary - displays base two of a number.
 * @n: value to convert to base two note
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
