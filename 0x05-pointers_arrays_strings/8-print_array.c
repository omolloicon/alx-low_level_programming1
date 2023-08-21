#include <stdio.h>
#include "main.h"

/**
 * print_array - main point
 * @a: input a
 * @n: input n
 * Return: nill.
 */
void print_array(int *a, int n)
{
	int k = 0;

	for (; k < n; k++)
	{
		printf("%d", *(a + k));
		if (k != (n - 1))
			printf(", ");
	}
	printf("\n");
}
