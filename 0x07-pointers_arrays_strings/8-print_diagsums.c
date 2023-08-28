#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - display of square diagonals
 *
 * @a: enter matrix
 * @size: this is the size
 * Return: null
 */

void print_diagsums(int *a, int size)
{
	int y, x, add_a = 0, add_b = 0;

	for (x = 0, y = size - 1; x < (size * size); x += size + 1, y += size - 1)
		add_a += a[x], add_b += a[y];
	printf("%d, %d\n", add_a, add_b);
}
