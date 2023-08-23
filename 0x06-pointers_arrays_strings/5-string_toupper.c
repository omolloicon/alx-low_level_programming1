#include  "main.h"

/**
 *string_toupper - converts lowercase to uppercase
 *@t: the string
 *
 *Return: done
 */

char *string_toupper(char *t)
{
	int n = 0;

	while (t[n] != '\0')
	{
		if (t[n] > 96 && t[n] < 123)
		{
			t[n] -= 32;
		}
		n++;
	}
	return (t);
}
