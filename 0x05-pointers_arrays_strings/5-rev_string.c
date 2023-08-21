#include "main.h"

/**
 * rev_string - reversing string.
 * @s: enter str.
 * Return: nill.
 */
void rev_string(char *s)
{
	int add = 0, k, l;
	char *str, temp;

	while (add >= 0)
	{
		if (s[add] == '\0')
			break;
		add++;
	}
	str = s;

	for (k = 0; k < (add - 1); k++)
	{
		for (l = k + 1; l > 0; l--)
		{
			temp = *(str + l);
			*(str + l) = *(str + (l - 1));
			*(str + (l - 1)) = temp;
		}
	}
}
