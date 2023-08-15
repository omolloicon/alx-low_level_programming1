#include "main.h"

/**
 * jack_bauer - jack bauer
 *
 * printing every time of day
 */

void jack_bauer(void)
{
	int k, l;

	k = 0;

	while (k < 24)
	{
		l = 0;
		while (l < 60)
		{
			_putchar((k / 10) + '0');
			_putchar((k % 10) + '0');
			_putchar(':');
			_putchar((l / 10) + '0');
			_putchar((l % 10) + '0');
			_putchar('\n');
			l++;
		}
		k++;
	}
}
