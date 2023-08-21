#include "main.h"

/**
 * swap_int - swappingg values
 * @a: int a.
 * @b: int b.
 * Return: nill.
 */
void swap_int(int *a, int *b)
{
	int l, k;

	l = *a;
	k = *b;
	/* swap */
	*a = k;
	*b = l;
}
