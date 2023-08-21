#include "main.h"

/**
 * print_rev - main entry.
 * @s: string.
 * Return: done.
 */
void print_rev(char *s)
{
	int add = 0;

	while (add >= 0)
	{
		if (s[add] == '\0')
		{
			break;
		}
		add++;
	}

	for (add--; add >= 0; add--)
	{
		_putchar(s[add]);
	}
	_putchar('\n');
}
