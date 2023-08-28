#include "main.h"

/**
 * print_chessboard - to print chase board
 * @a: pointer to array
 *
 * Return: null
 */
void print_chessboard(char (*a)[8])
{
	int k, m;

	for (k = 0; k < 8; k++)
	{
		for (m = 0; m < 8; m++)
		{
			_putchar(a[k][m]);
			if (m == 7)
				_putchar('\n');
		}
	}
}
