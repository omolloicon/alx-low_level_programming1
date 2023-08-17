#include "main.h"

/**
* print_diagonal - diagonal
* @n: integer
*/
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int m, k;

		for (m = 0; m < n; m++)
		{
			for (k = 0; k < n; k++)
			{
				if (k == m)
					_putchar('\\');
				else if (k < m)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
