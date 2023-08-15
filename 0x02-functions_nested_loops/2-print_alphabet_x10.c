#include "main.h"

/**
 * print_alphabet_x10 - print alpha bet tren times
 * alphabet are in lower case
 *
 */
void print_alphabet_x10(void)
{
	char alpha;
	int j;

	j = 0;

	while (j < 10)
	{
		alpha = 'a';
		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar('\n');
		j++;
	}
}
