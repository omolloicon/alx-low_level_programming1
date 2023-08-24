#include "main.h"

/**
 *print_number - use of _putchar
 *@n: is the integer under process
 */

void print_number(int n)
{
	unsigned int k;

	if (n < 0)
	{
		_putchar('-');
		k = n * -1;
	}
	else
	{
		k = n;
	}
	if (k / 10)
	{
		print_number(k / 10);
	}
	_putchar((k % 10) + '0');
}
