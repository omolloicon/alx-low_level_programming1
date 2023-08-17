#include "main.h"

/**
 * print_numbers - main entry
 *
 * Return:0
 */

void print_numbers(void)
{
	char k = 0;

	while (k <= 9)
	{
		_putchar('0' + k);
		k++;
	}
	_putchar('\n');
}
