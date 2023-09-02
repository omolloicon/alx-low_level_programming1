#include "main.h"
/**
 * _puts - string display.
 * @str: enter str.
 * Return: nill.
 */
void _puts(char *str)
{
	int add = 0;

	while (add >= 0)
	{
		if (str[add] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[add]);
		add++;
	}
}
