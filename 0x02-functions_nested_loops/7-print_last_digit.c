#include "main.h"
/**
* print_last_digit - return last digit
* @n : number to check
* Return: 0 or 1
*/

int print_last_digit(int n)
{
	int g;

	if (n < 0)
	{
		g = -1 * (n % 10);
	}
	else
	{
		g = n % 10;
	}
	_putchar(g + '0');
	return (g);
}
