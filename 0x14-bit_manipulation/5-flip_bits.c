#include "main.h"

/**
 * flip_bits - flipped bits
 * @n: num one
 * @m: num two
 * Return: number of bits to get
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int operator = n ^ m, basetwo = 0;

	while (operator > 0)
	{
		basetwo += (operator & 1);
		operator >>= 1;
	}

	return (basetwo);
}
