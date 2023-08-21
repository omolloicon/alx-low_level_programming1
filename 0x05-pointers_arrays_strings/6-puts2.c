#include "main.h"

/**
 * puts2 - display one character in ever two
 * @str: entry string.
 * Return: nill.
 */
void puts2(char *str)
{
	int add = 0;

	while (add >= 0)
	{
		if (str[add] == '\0')
		{
			_putchar('\n');
			break;
		}
		if (add % 2 == 0)
			_putchar(str[add]);
		add++;
	}
}
