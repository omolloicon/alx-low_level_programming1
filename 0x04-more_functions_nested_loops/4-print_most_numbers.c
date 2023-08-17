#include "main.h"

/**
 * print_most_numbers - main entry point
 * Return:0
 */

void print_most_numbers(void)
{
	char p = 0;

	while (p <= 9)
	{
		if (p != 2 && p != 4)
		{
			_putchar('0' + p);
		}
		p++;
	}
	_putchar('\n');
}
