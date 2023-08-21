#include "main.h"

/**
 * puts_half - display half char of string.
 * @str: entry point of string.
 * Return: nill.
 */
void puts_half(char *str)
{
	int add = 0, k;

	while (add >= 0)
	{
		if (str[add] == '\0')
			break;
		add++;
	}

	if (add % 2 == 1)
		k = add / 2;
	else
		k = (add - 1) / 2;

	for (k++; k < add; k++)
		_putchar(str[k]);
	_putchar('\n');
}
