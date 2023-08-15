#include "main.h"

/**
 * print_alphabet - entry point to print alphabet in lower cases
 * a to z
 */

void print_alphabet(void)
{
	char az;

	for (az = 'a'; az <= 'z'; az++)
		_putchar(az);

	_putchar('\n');
}
