#include "main.h"

/**
 * _atoi - convertion of string to integer
 * @s: atoi
 * Return: done
 */
int _atoi(char *s)
{
	unsigned int start = 0, si = 0, a = 0, b = 1, n = 1, l;

	while (*(s + start) != '\0')
	{
		if (si > 0 && (*(s + start) < '0' || *(s + start) > '9'))
			break;

		if (*(s + start) == '-')
			b *= -1;

		if ((*(s + start) >= '0') && (*(s + start) <= '9'))
		{
			if (si > 0)
				n *= 10;
			si++;
		}
		start++;
	}

	for (l = start - si; l < start; l++)
	{
		a = a + ((*(s + l) - 48) * n);
		n /= 10;
	}
	return (a * b);
}
