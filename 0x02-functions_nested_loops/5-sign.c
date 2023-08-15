#include "main.h"

/**
 * print_sign - printng sign of num after check
 * @n: checking valiabilty of num
 * Return: 1 and prints + for > zero 0
 * prints 0 for = zero
 * -1 and prints - for < zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
	}
		return (-1);
}
