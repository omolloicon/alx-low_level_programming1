#include "main.h"

/**
 *print_number - use of _putchar
 *@n: is the integer under process
 */

void print_number(int n)
{
	unsigned int k = 1;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	if (n == 0)
		_putchar('0');
	else
	{
		while ((n / k) >= 10)
			k *= 10;

		while (k > 0)
		{
			_putchar((n / k) +'0');
			n %= k;
			k /= 10;
		}
	}
}
