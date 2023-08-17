#include "main.h"

/**
* print_line - main entry
* @n: variable
*/
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int t;

		for (t = 1; t <= n; t++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
